#include "Image.h"
#include <cstddef>

Image::Image() 
	:width(0)
	,height(0)
	,pixels(NULL)
{

}

Image::~Image() {
	if(pixels != NULL) {
		delete[] pixels;
	}
}

bool Image::load(const char* filepath) {
	pixels = stbi_load(filepath, &width, &height, &bpp, 0);
	if(!pixels) {
		return false;
	}
	return true;
}
