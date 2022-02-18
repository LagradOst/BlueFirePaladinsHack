// Dear ImGui: standalone example application for DirectX 11
// If you are new to Dear ImGui, read documentation from the docs/ folder + read the top of imgui.cpp.
// Read online: https://github.com/ocornut/imgui/tree/master/docs

//https://github.com/ocornut/imgui/issues/707

#include "settings.h"
#include "resource.h"
#include "ImGui/imgui.h"
#include "ImGui/imgui_impl_win32.h"
#include "ImGui/imgui_impl_dx11.h"
#include <d3d11.h>
#include <tchar.h>
#include "ImGui/imgui_internal.h"
#include "utils/Image.h"
#include "Logic.h"
#include <thread>
#include "skCrypter.h"

// Data
static ID3D11Device* g_pd3dDevice = NULL;
static ID3D11DeviceContext* g_pd3dDeviceContext = NULL;
static IDXGISwapChain* g_pSwapChain = NULL;
static ID3D11RenderTargetView* g_mainRenderTargetView = NULL;

// Forward declarations of helper functions
bool CreateDeviceD3D(HWND hWnd);
void CleanupDeviceD3D();
void CreateRenderTarget();
void CleanupRenderTarget();
LRESULT WINAPI WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

const auto colorPrimaryHex = 0x6ecfff;//0x4cc2ff;0x3d50fa;//
const auto colorPrimary = hex(colorPrimaryHex);//0x3d50fa_h;
const auto colorPrimaryBlack = 0x111111_h;
const auto textColor = 0xe6e6e6_h;
const auto white = 0xFFFFFF_h;
const auto colorBlack = 0x22252e_h;
const auto whiteAlphaSmall = hex(0xFFFFFF, 0.05f);
const auto whiteAlphaMedium = hex(0xFFFFFF, 0.10f);
const auto whiteAlphaLarge = hex(0xFFFFFF, 0.25f);
const auto whiteEnabled = 0xA0A0A0_h;
const auto transparent = hex(0, 0.0f);;

void StyleColorsBlueFire(ImGuiStyle* dst)
{
	ImGuiStyle* style = dst ? dst : &ImGui::GetStyle();
	ImVec4* colors = style->Colors;
	float radius = 5.f;
	style->TabRounding = radius;
	style->WindowRounding = radius;
	style->ChildRounding = radius;
	style->FrameRounding = radius; // checkmark and boxes
	style->PopupRounding = radius;
	style->TabRounding = radius;
	style->GrabRounding = radius;

	colors[ImGuiCol_Text] = textColor;
	colors[ImGuiCol_CheckMark] = white;
	colors[ImGuiCol_Button] = whiteAlphaSmall;
	colors[ImGuiCol_ButtonHovered] = whiteAlphaMedium;
	colors[ImGuiCol_ButtonActive] = whiteAlphaLarge;
	colors[ImGuiCol_SliderGrab] = 0x404040_h;
	colors[ImGuiCol_SliderGrabActive] = 0x606060_h;
	colors[ImGuiCol_FrameBgActive] = colorPrimary;
	colors[ImGuiCol_FrameBgWhite] = whiteEnabled;
	colors[ImGuiCol_FrameBg] = whiteAlphaSmall;
	colors[ImGuiCol_FrameBgHovered] = whiteAlphaMedium;
	colors[ImGuiCol_WindowBg] = transparent;
	colors[ImGuiCol_HeaderHovered] = whiteAlphaMedium;
	colors[ImGuiCol_Header] = whiteAlphaSmall;
	colors[ImGuiCol_HeaderActive] = whiteAlphaLarge;
}

// Simple helper function to load an image into a DX11 texture with common settings
bool LoadTextureFromFile(const char* filename, ID3D11ShaderResourceView** out_srv, int* out_width, int* out_height)
{
	// Load from disk into a raw RGBA buffer
	int image_width = 0;
	int image_height = 0;
	unsigned char* image_data = stbi_load(filename, &image_width, &image_height, NULL, 4);
	if(image_data == NULL)
		return false;

	// Create texture
	D3D11_TEXTURE2D_DESC desc;
	ZeroMemory(&desc, sizeof(desc));
	desc.Width = image_width;
	desc.Height = image_height;
	desc.MipLevels = 1;
	desc.ArraySize = 1;
	desc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
	desc.SampleDesc.Count = 1;
	desc.Usage = D3D11_USAGE_DEFAULT;
	desc.BindFlags = D3D11_BIND_SHADER_RESOURCE;
	desc.CPUAccessFlags = 0;

	ID3D11Texture2D* pTexture = NULL;
	D3D11_SUBRESOURCE_DATA subResource;
	subResource.pSysMem = image_data;
	subResource.SysMemPitch = desc.Width * 4;
	subResource.SysMemSlicePitch = 0;
	g_pd3dDevice->CreateTexture2D(&desc, &subResource, &pTexture);

	// Create texture view
	D3D11_SHADER_RESOURCE_VIEW_DESC srvDesc;
	ZeroMemory(&srvDesc, sizeof(srvDesc));
	srvDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
	srvDesc.ViewDimension = D3D11_SRV_DIMENSION_TEXTURE2D;
	srvDesc.Texture2D.MipLevels = desc.MipLevels;
	srvDesc.Texture2D.MostDetailedMip = 0;
	g_pd3dDevice->CreateShaderResourceView(pTexture, &srvDesc, out_srv);
	pTexture->Release();

	*out_width = image_width;
	*out_height = image_height;
	stbi_image_free(image_data);

	return true;
}

struct ImGuiTexture {
	ID3D11ShaderResourceView* texture;
	ImVec2 dimentions;
	ImVec4 imageTint;

	inline ImGuiTexture(ID3D11ShaderResourceView* tex, ImVec2 dim) : dimentions(dim), texture(tex) {}

	ImGuiTexture(const char* filePath, ImVec4 tint) {
		int my_image_width = 0;
		int my_image_height = 0;
		texture = NULL;
		bool ret = LoadTextureFromFile(filePath, &texture, &my_image_width, &my_image_height);
		dimentions = ImVec2(my_image_width, my_image_height);
		imageTint = tint;
	}

	ImGuiTexture(const char* filePath, int tint = 0xFFFFFFF, float alpha = 1.0f) {
		int my_image_width = 0;
		int my_image_height = 0;
		texture = NULL;
		bool ret = LoadTextureFromFile(filePath, &texture, &my_image_width, &my_image_height);
		dimentions = ImVec2(my_image_width, my_image_height);
		imageTint = hex(tint, alpha);
	}
};

void DrawTexture(ImGuiTexture tex) {
	ImGui::Image(tex.texture, tex.dimentions, ImVec2(0, 0), ImVec2(1, 1), tex.imageTint);
}


void DrawSlider(const char* name, ImGuiTexture tex, float* f, float min = 0.0, float max = 1.0f) {
	DrawTexture(tex);
	ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(0, 0, 0, 0));
	ImGui::SameLine();
	ImGui::SliderFloat(name, f, min, max, "");
	ImGui::PopStyleColor();
}

bool DrawButton(bool isSelected, ImGuiTexture tex) {

	if(isSelected) {
		ImGui::PushStyleColor(ImGuiCol_Button, colorPrimary);
		ImGui::PushStyleColor(ImGuiCol_ButtonHovered, colorPrimary);
		ImGui::PushStyleColor(ImGuiCol_ButtonActive, colorPrimary);
	}

	auto ret = ImGui::ImageButtonPadding(tex.texture, tex.dimentions, ImVec2(ImGui::GetWindowWidth() / 4 - tex.dimentions.x / 2 - 6, 0), ImVec2(0, 0), ImVec2(1, 1), -1, ImVec4(0, 0, 0, 0), isSelected ? colorPrimaryBlack : white);

	if(isSelected)
		ImGui::PopStyleColor(3);
	return ret;
}

void DrawCheckColor(const char* text, bool* isChecked, const char* colorText, ImVec4* color) {
	ImGui::Checkbox(text, isChecked);

	if(*isChecked) {
		ImGui::SameLine();
		ImGui::ColorEdit4(colorText, (float*)color, ImGuiColorEditFlags_NoInputs);
	}
}

void hack()
{
	if(!InitHack()) {
		exit(1);
	}
}

// Main code
int main(int, char**)
{
	LoadConfig();

	std::thread t1(hack);

	const int windowHeight = 700;
	const int windowWidth = 500;

	// Create application window
	//ImGui_ImplWin32_EnableDpiAwareness();
	WNDCLASSEX wc = { sizeof(WNDCLASSEX), CS_CLASSDC, WndProc, 0L, 0L, GetModuleHandle(NULL), NULL, NULL, NULL, NULL, _T("Settings"), NULL };
	::RegisterClassEx(&wc);
	HWND hwnd = ::CreateWindow(wc.lpszClassName, _T("Settings"), WS_OVERLAPPEDWINDOW, 100, 100, windowWidth, windowHeight, NULL, NULL, wc.hInstance, NULL);

	HICON hIcon = LoadIcon(wc.hInstance, MAKEINTRESOURCE(MAINICON));

	SendMessage(hwnd, WM_SETICON, ICON_SMALL, (LPARAM)hIcon);
	SendMessage(hwnd, WM_SETICON, ICON_BIG, (LPARAM)hIcon);

	// Initialize Direct3D
	if(!CreateDeviceD3D(hwnd))
	{
		printf("Failed to CreateDeviceD3D\n");
		CleanupDeviceD3D();
		::UnregisterClass(wc.lpszClassName, wc.hInstance);
		return 1;
	}

	// Show the window
	::ShowWindow(hwnd, SW_SHOWDEFAULT);
	::UpdateWindow(hwnd);

	// Setup Dear ImGui context
	IMGUI_CHECKVERSION();
	ImGui::CreateContext();
	ImGuiIO& io = ImGui::GetIO(); (void)io;
	//io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;     // Enable Keyboard Controls
	//io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad;      // Enable Gamepad Controls

	// Setup Dear ImGui style
	StyleColorsBlueFire(0);
	//ImGui::StyleColorsDark();
	//ImGui::StyleColorsClassic();

	// Setup Platform/Renderer backends
	ImGui_ImplWin32_Init(hwnd);
	ImGui_ImplDX11_Init(g_pd3dDevice, g_pd3dDeviceContext);

	// Load Fonts
	// - If no fonts are loaded, dear imgui will use the default font. You can also load multiple fonts and use ImGui::PushFont()/PopFont() to select them.
	// - AddFontFromFileTTF() will return the ImFont* so you can store it if you need to select the font among multiple.
	// - If the file cannot be loaded, the function will return NULL. Please handle those errors in your application (e.g. use an assertion, or display an error and quit).
	// - The fonts will be rasterized at a given size (w/ oversampling) and stored into a texture when calling ImFontAtlas::Build()/GetTexDataAsXXXX(), which ImGui_ImplXXXX_NewFrame below will call.
	// - Read 'docs/FONTS.md' for more instructions and details.
	// - Remember that in C/C++ if you want to include a backslash \ in a string literal you need to write a double backslash \\ !
	//io.Fonts->AddFontDefault();
	//io.Fonts->AddFontFromFileTTF("../../misc/fonts/Roboto-Medium.ttf", 16.0f);
	//io.Fonts->AddFontFromFileTTF("../../misc/fonts/Cousine-Regular.ttf", 15.0f);
	//io.Fonts->AddFontFromFileTTF("../../misc/fonts/DroidSans.ttf", 16.0f);
	//io.Fonts->AddFontFromFileTTF("../../misc/fonts/ProggyTiny.ttf", 10.0f);
	//io.Fonts->AddFontFromFileTTF("res/fonts/opensans.ttf", 20.0f);
	io.Fonts->AddFontFromFileTTF(skCrypt("res/fonts/segoeuivf.ttf"), 25.0f);
	//ImFont* font = io.Fonts->AddFontFromFileTTF("c:\\Windows\\Fonts\\Veranda.ttf", 18.0f, NULL, io.Fonts->GetGlyphRangesJapanese());
	//IM_ASSERT(font != NULL);

	//

	// Our state
	bool show_demo_window = false;
	bool show_another_window = false;
	const ImVec4 background_color = 0x111111_h;

	auto fovTex = ImGuiTexture(skCrypt("res/img/fov.png"));
	auto speedTex = ImGuiTexture(skCrypt("res/img/speed2.png"));
	auto visTex = ImGuiTexture(skCrypt("res/img/vis.png"));

	// Main loop
	bool done = false;
	while(!done)
	{
		// Poll and handle messages (inputs, window resize, etc.)
		// You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
		// - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application.
		// - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application.
		// Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
		MSG msg;
		while(::PeekMessage(&msg, NULL, 0U, 0U, PM_REMOVE))
		{
			::TranslateMessage(&msg);
			::DispatchMessage(&msg);
			if(msg.message == WM_QUIT)
				done = true;
		}
		if(done)
			break;

		// Start the Dear ImGui frame
		ImGui_ImplDX11_NewFrame();
		ImGui_ImplWin32_NewFrame();
		ImGui::NewFrame();

		//Image image;
		//image.load("res/img/speed.png");

		//auto ptr = image.pixels;
		// 1. Show the big demo window (Most of the sample code is in ImGui::ShowDemoWindow()! You can browse its code to learn more about Dear ImGui!).
		if(show_demo_window)
			ImGui::ShowDemoWindow(&show_demo_window);


		{
			static const char* tracerTypeStrings[3] = {
				skCrypt("Center"),
				skCrypt("Top"),
				skCrypt("Bottom"),
			};

			static int tab = 0;
			static auto flags = ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoBackground | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoSavedSettings;
			ImGui::SetNextWindowPos(ImVec2(0, 0));
			ImGui::SetNextWindowSize(ImVec2(windowWidth - 15, windowHeight), 0);
			ImGui::Begin(skCrypt("Settings"), 0, flags);

			if(DrawButton(tab == 0, fovTex)) {
				tab = 0;
			}
			ImGui::SameLine();
			if(DrawButton(tab == 1, visTex)) {
				tab = 1;
			}

			if(tab == 0) {
#ifdef TRIGGERBOT
				ImGui::Checkbox(skCrypt("Triggerbot"), &triggerbotEnabled);
#endif // TRIGGERBOT
#ifdef NORECOIL
				ImGui::Checkbox(skCrypt("No Recoil"), &noRecoilEnabled);
				ImGui::Checkbox(skCrypt("No Spread"), &noSpreadEnabled);
#endif
#ifdef AIMBOT
				ImGui::Checkbox(skCrypt("Aimbot"), &aimbotEnabled);
#ifdef AIMBOT_PREDICTION
				ImGui::Checkbox(skCrypt("Prediction aim"), &aimbotPredictionEnabled);
#endif // AIMBOT_PREDICTION
				if(!aimbotEnabled) {
					ImGui::BeginDisabled();
				}

				ImGui::Checkbox(skCrypt("Hold"), &isHold);
				if(isHold) {
					ImGui::Checkbox(skCrypt("Invert Hold"), &invertHold);
				}

				if(holdKeyIndex >= 0) {
					ImGui::Combo(isHold ? skCrypt("Hold key") : skCrypt("Toggle Key"), &holdKeyIndex, holdKeys, holdSize);
					holdKey = holdKeysCodes[holdKeyIndex];
				}
				else {
					ImGui::Text(skCrypt("Custom key used: 0x%llX"), holdKey);
				}

				DrawCheckColor(skCrypt("Show Fov"), &aimbotFovEnabled, skCrypt("Fov Color"), &aimbotFovColor);

				DrawSlider(skCrypt("Fov"), fovTex, &aimbotFov, 0.f, 1000);

				ImGui::Checkbox(skCrypt("Smoothing"), &aimbotSmoothingEnabled);
				if(aimbotSmoothingEnabled) {
					ImGui::Checkbox(skCrypt("Lock"), &aimbotLockWhenClose);
					DrawSlider(skCrypt("Speed"), speedTex, &aimbotSpeed);
				}
				if(!aimbotEnabled) {
					ImGui::EndDisabled();
				}
#endif
			}
			else if(tab == 1) {
#ifdef THIRDPERSON
				ImGui::Checkbox(skCrypt("Third Person"), &thirdPersonEnabled);
#endif // THIRDPERSON
#ifdef GLOW
				ImGui::Checkbox(skCrypt("Glow"), &glowEnabled);
#endif // GLOW

#ifdef ESP


#ifdef NAME_ESP
				DrawCheckColor(skCrypt("Names"), &nameEnabled, skCrypt("Name Color"), &nameColor);
#endif // NAME_ESP

				DrawCheckColor(skCrypt("ESP"), &boxEnabled, skCrypt("Box Color"), &boxColor);
				ImGui::ColorEdit4(skCrypt("Box Target Color"), (float*)&targetColor, ImGuiColorEditFlags_NoInputs);
				ImGui::ColorEdit4(skCrypt("Box Behind Wall Color"), (float*)&boxBehindWallColor, ImGuiColorEditFlags_NoInputs);

				if(!boxEnabled) ImGui::BeginDisabled();
				DrawCheckColor(skCrypt("Box Fill"), &boxFillEnabled, skCrypt("Box fill Color"), &boxFillColor);
				if(!boxEnabled) ImGui::EndDisabled();

#ifdef BONES
				DrawCheckColor(skCrypt("Bones"), &bonesEnabled, skCrypt("Bone Color"), &boneColor);
#endif // BONES

#ifdef HP_NAME
				DrawCheckColor(skCrypt("Hp Name"), &hpnameEnabled, skCrypt("Hp name Color"), &hpnameColor);
#endif // HP_BAR
#ifdef HP_BAR
				ImGui::Checkbox(skCrypt("Hp Bar"), &hpBarEnabled);
				if(hpBarEnabled) {
					ImGui::ColorEdit4(skCrypt("Low HP"), (float*)&hpBarLowColor, ImGuiColorEditFlags_NoInputs);
					ImGui::ColorEdit4(skCrypt("High HP"), (float*)&hpBarHighColor, ImGuiColorEditFlags_NoInputs);
					ImGui::ColorEdit4(skCrypt("Background"), (float*)&hpBarBgColor, ImGuiColorEditFlags_NoInputs);
				}
#endif // HP_BAR

				ImGui::Checkbox(skCrypt("Tracers"), &tracersEnabled);
				if(tracersEnabled) {
					ImGui::Combo(skCrypt("Location"), &tracersType, tracerTypeStrings, 3);
					ImGui::ColorEdit4(skCrypt("Tracers Near Color"), (float*)&tracersNearColor, ImGuiColorEditFlags_NoInputs);
					ImGui::ColorEdit4(skCrypt("Tracers Far Color"), (float*)&tracersFarColor, ImGuiColorEditFlags_NoInputs);
				}
#endif // ESP
			}
			ImGui::End();

		}


		// 2. Show a simple window that we create ourselves. We use a Begin/End pair to created a named window.
		/* {
			static float f = 0.0f;
			static int counter = 0;

			ImGui::Begin("Hello, world!");                          // Create a window called "Hello, world!" and append into it.


			ImGui::Text("This is some useful text.");               // Display some text (you can use a format strings too)
			ImGui::Checkbox("Demo Window", &show_demo_window);      // Edit bools storing our window open/close state
			ImGui::Checkbox("Another Window", &show_another_window);

			ImGui::PushID(0);
			ImGui::PushStyleColor(ImGuiCol_Button, 0xFF0000_h);
			ImGui::PushStyleColor(ImGuiCol_Text, 0x000FFF_h);
			ImGui::PushStyleColor(ImGuiCol_TextSelectedBg, 0x000000_h);
			ImGui::PushStyleColor(ImGuiCol_ButtonHovered, 0x00FF00_h);
			ImGui::PushStyleColor(ImGuiCol_ButtonActive, 0x0000FF_h);
			ImGui::Button("Click Me");
			ImGui::PopStyleColor(5);
			ImGui::PopID();

			DrawTexture(speedTex);
			ImGui::SameLine();
			ImGui::SliderFloat(" ", &f, 0.0f, 1.0f, "");            // Edit 1 float using a slider from 0.0f to 1.0f
			ImGui::ColorEdit3("clear color", (float*)&clear_color); // Edit 3 floats representing a color

			if(ImGui::Button("Button"))                            // Buttons return true when clicked (most widgets return true when edited/activated)
				counter++;
			ImGui::SameLine();
			ImGui::Text("counter = %d", counter);

			ImGui::Text("Application average %.3f ms/frame (%.1f FPS)", 1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);
			ImGui::End();
		}*/

		// 3. Show another simple window.
		if(show_another_window)
		{
			ImGui::Begin(skCrypt("Another Window"), &show_another_window);   // Pass a pointer to our bool variable (the window will have a closing button that will clear the bool when clicked)
			ImGui::Text(skCrypt("Hello from another window!"));
			if(ImGui::Button(skCrypt("Close Me")))
				show_another_window = false;
			ImGui::End();
		}

		// Rendering
		ImGui::Render();
		const float clear_color_with_alpha[4] = { background_color.x * background_color.w, background_color.y * background_color.w, background_color.z * background_color.w, background_color.w };
		g_pd3dDeviceContext->OMSetRenderTargets(1, &g_mainRenderTargetView, NULL);
		g_pd3dDeviceContext->ClearRenderTargetView(g_mainRenderTargetView, clear_color_with_alpha);
		ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());

		g_pSwapChain->Present(1, 0); // Present with vsync
		//g_pSwapChain->Present(0, 0); // Present without vsync
	}

	SaveConfig();

	// Cleanup
	ImGui_ImplDX11_Shutdown();
	ImGui_ImplWin32_Shutdown();
	ImGui::DestroyContext();

	CleanupDeviceD3D();
	::DestroyWindow(hwnd);
	::UnregisterClass(wc.lpszClassName, wc.hInstance);


	Shutdown();
	exit(0);

	return 0;
}

// Helper functions

bool CreateDeviceD3D(HWND hWnd)
{
	// Setup swap chain
	DXGI_SWAP_CHAIN_DESC sd;
	ZeroMemory(&sd, sizeof(sd));
	sd.BufferCount = 2;
	sd.BufferDesc.Width = 0;
	sd.BufferDesc.Height = 0;
	sd.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
	sd.BufferDesc.RefreshRate.Numerator = 60;
	sd.BufferDesc.RefreshRate.Denominator = 1;
	sd.Flags = DXGI_SWAP_CHAIN_FLAG_ALLOW_MODE_SWITCH;
	sd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
	sd.OutputWindow = hWnd;
	sd.SampleDesc.Count = 1;
	sd.SampleDesc.Quality = 0;
	sd.Windowed = TRUE;
	sd.SwapEffect = DXGI_SWAP_EFFECT_DISCARD;

	UINT createDeviceFlags = 0;
	//createDeviceFlags |= D3D11_CREATE_DEVICE_DEBUG;
	D3D_FEATURE_LEVEL featureLevel;
	const D3D_FEATURE_LEVEL featureLevelArray[2] = { D3D_FEATURE_LEVEL_11_0, D3D_FEATURE_LEVEL_10_0, };
	if(D3D11CreateDeviceAndSwapChain(NULL, D3D_DRIVER_TYPE_HARDWARE, NULL, createDeviceFlags, featureLevelArray, 2, D3D11_SDK_VERSION, &sd, &g_pSwapChain, &g_pd3dDevice, &featureLevel, &g_pd3dDeviceContext) != S_OK)
		return false;

	CreateRenderTarget();
	return true;
}

void CleanupDeviceD3D()
{
	CleanupRenderTarget();
	if(g_pSwapChain) { g_pSwapChain->Release(); g_pSwapChain = NULL; }
	if(g_pd3dDeviceContext) { g_pd3dDeviceContext->Release(); g_pd3dDeviceContext = NULL; }
	if(g_pd3dDevice) { g_pd3dDevice->Release(); g_pd3dDevice = NULL; }
}

void CreateRenderTarget()
{
	ID3D11Texture2D* pBackBuffer;
	g_pSwapChain->GetBuffer(0, IID_PPV_ARGS(&pBackBuffer));
	g_pd3dDevice->CreateRenderTargetView(pBackBuffer, NULL, &g_mainRenderTargetView);
	pBackBuffer->Release();
}

void CleanupRenderTarget()
{
	if(g_mainRenderTargetView) { g_mainRenderTargetView->Release(); g_mainRenderTargetView = NULL; }
}

// Forward declare message handler from imgui_impl_win32.cpp
extern IMGUI_IMPL_API LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

// Win32 message handler
LRESULT WINAPI WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
	if(ImGui_ImplWin32_WndProcHandler(hWnd, msg, wParam, lParam))
		return true;

	switch(msg)
	{
	case WM_SIZE:
		if(g_pd3dDevice != NULL && wParam != SIZE_MINIMIZED)
		{
			CleanupRenderTarget();
			g_pSwapChain->ResizeBuffers(0, (UINT)LOWORD(lParam), (UINT)HIWORD(lParam), DXGI_FORMAT_UNKNOWN, 0);
			CreateRenderTarget();
		}
		return 0;
	case WM_SYSCOMMAND:
		if((wParam & 0xfff0) == SC_KEYMENU) // Disable ALT application menu
			return 0;
		break;
	case WM_DESTROY:
		::PostQuitMessage(0);
		return 0;
	}
	return ::DefWindowProc(hWnd, msg, wParam, lParam);
}
