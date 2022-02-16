#pragma once
#include <cstdint>
#include <cstring>
#include <cmath>
#include <string>
#include <algorithm>
#include "../Mhyprot/baseadress.h"

#pragma warning(disable : 4834)
#pragma warning (disable : 4099)

#define M_PI 3.14159265358979323846

class UObject {
public:
	uint64_t data;

	inline bool operator == (const UObject& other) const {
		return data == other.data;
	}

	inline bool operator != (const UObject& other) const {
		return data != other.data;
	}

	inline bool IsValid() {
		if(data == 0 || data == 0xCCCCCCCCCCCCCCCC || reinterpret_cast<void*>(data) == nullptr) {
			return false;
		}

		return true;
	}
};

template<class T>
class TArray
{
public:
	int Length() const
	{
		return m_nCount;
	}

	bool IsValidSize() const
	{
		if(m_nCount > m_nMax)
			return false;
		if(!m_Data)
			return false;
		return true;
	}

	uint64_t GetAddress() const
	{
		return m_Data;
	}

	T GetById(int i)
	{
		return read<T>(m_Data + i * 8);
	}

protected:
	uint64_t m_Data;
	uint32_t m_nCount;
	uint32_t m_nMax;
};

struct FString : TArray<wchar_t>
{
	std::wstring ToWString() const
	{
		wchar_t* buffer = new wchar_t[m_nCount];
		read_array(m_Data, buffer, m_nCount);
		std::wstring ws(buffer);
		delete[] buffer;
		return ws;
	}

	std::string ToString() const
	{
		std::wstring ws = ToWString();
		std::string str(ws.begin(), ws.end());

		return str;
	}
};

struct FVector
{
	float X;
	float Y;
	float Z;

	inline FVector()
		: X(0), Y(0), Z(0) {
	}

	inline FVector(float x, float y, float z) : X(x), Y(y), Z(z) {}

	__forceinline FVector operator-(const FVector& V) {
		return FVector(X - V.X, Y - V.Y, Z - V.Z);
	}

	__forceinline FVector operator+(const FVector& V) {
		return FVector(X + V.X, Y + V.Y, Z + V.Z);
	}

	__forceinline FVector operator*(float Scale) const {
		return FVector(X * Scale, Y * Scale, Z * Scale);
	}

	__forceinline FVector operator/(float Scale) const {
		const float RScale = 1.f / Scale;
		return FVector(X * RScale, Y * RScale, Z * RScale);
	}

	__forceinline FVector operator+(float A) const {
		return FVector(X + A, Y + A, Z + A);
	}

	__forceinline FVector operator-(float A) const {
		return FVector(X - A, Y - A, Z - A);
	}

	__forceinline FVector operator*(const FVector& V) const {
		return FVector(X * V.X, Y * V.Y, Z * V.Z);
	}

	__forceinline FVector operator/(const FVector& V) const {
		return FVector(X / V.X, Y / V.Y, Z / V.Z);
	}

	__forceinline float operator|(const FVector& V) const {
		return X * V.X + Y * V.Y + Z * V.Z;
	}

	__forceinline float operator^(const FVector& V) const {
		return X * V.Y - Y * V.X - Z * V.Z;
	}

	__forceinline FVector& operator+=(const FVector& v) {
		X += v.X;
		Y += v.Y;
		Z += v.Z;
		return *this;
	}

	__forceinline FVector& operator-=(const FVector& v) {
		X -= v.X;
		Y -= v.Y;
		Z -= v.Z;
		return *this;
	}

	__forceinline FVector& operator*=(const FVector& v) {
		X *= v.X;
		Y *= v.Y;
		Z *= v.Z;
		return *this;
	}

	__forceinline FVector& operator/=(const FVector& v) {
		X /= v.X;
		Y /= v.Y;
		Z /= v.Z;
		return *this;
	}

	__forceinline bool operator==(const FVector& src) const {
		return (src.X == X) && (src.Y == Y) && (src.Z == Z);
	}

	__forceinline bool operator!=(const FVector& src) const {
		return (src.X != X) || (src.Y != Y) || (src.Z != Z);
	}

	__forceinline float Size() const {
		return sqrt(X * X + Y * Y + Z * Z);
	}

	__forceinline float Size2D() const {
		return sqrt(X * X + Y * Y);
	}

	__forceinline float SizeSquared() const {
		return X * X + Y * Y + Z * Z;
	}

	__forceinline float SizeSquared2D() const {
		return X * X + Y * Y;
	}

	__forceinline float Dot(const FVector& vOther) const {
		const FVector& a = *this;
		return (a.X * vOther.X + a.Y * vOther.Y + a.Z * vOther.Z);
	}

	__forceinline FVector Normalize() {
		FVector vector;
		float length = this->Size();

		if(length != 0) {
			vector.X = X / length;
			vector.Y = Y / length;
			vector.Z = Z / length;
		}
		else {
			vector.X = vector.Y = 0.0f;
			vector.Z = 1.0f;
		}
		return vector;
	}

	__forceinline FVector ToRotator() {
		FVector rotator;
		rotator.X = -(float)atan(Z / Size2D()) * (float)(180.0f / M_PI);
		rotator.Y = (float)atan(Y / X) * (float)(180.0f / M_PI);
		rotator.Z = (float)0.f;
		if(X >= 0.f)
			rotator.Y += 180.0f;
		return rotator;
	}

	__forceinline FVector Clamp()
	{
		FVector clamped;
		while(clamped.Y < -180.0f)
			clamped.Y += 360.0f;
		while(clamped.Y > 180.0f)
			clamped.Y -= 360.0f;
		if(clamped.X < -74.0f)
			clamped.X = -74.0f;
		if(clamped.X > 74.0f)
			clamped.X = 74.0f;
		return clamped;
	}
};

struct alignas(16) FPlane : public FVector
{
	float W;
};

struct alignas(16) FQuat
{
	float X;
	float Y;
	float Z;
	float W;
	inline FQuat() : X(0), Y(0), Z(0), W(0) { }
};


struct FMatrix
{
	struct FPlane XPlane;
	struct FPlane YPlane;
	struct FPlane ZPlane;
	struct FPlane WPlane;

	FMatrix operator*(const FMatrix& pM2)
	{
		FMatrix pOut;
		pOut.XPlane.X = XPlane.X * pM2.XPlane.X + XPlane.Y * pM2.YPlane.X + XPlane.Z * pM2.ZPlane.X + XPlane.W * pM2.WPlane.X;
		pOut.XPlane.Y = XPlane.X * pM2.XPlane.Y + XPlane.Y * pM2.YPlane.Y + XPlane.Z * pM2.ZPlane.Y + XPlane.W * pM2.WPlane.Y;
		pOut.XPlane.Z = XPlane.X * pM2.XPlane.Z + XPlane.Y * pM2.YPlane.Z + XPlane.Z * pM2.ZPlane.Z + XPlane.W * pM2.WPlane.Z;
		pOut.XPlane.W = XPlane.X * pM2.XPlane.W + XPlane.Y * pM2.YPlane.W + XPlane.Z * pM2.ZPlane.W + XPlane.W * pM2.WPlane.W;
		pOut.YPlane.X = YPlane.X * pM2.XPlane.X + YPlane.Y * pM2.YPlane.X + YPlane.Z * pM2.ZPlane.X + YPlane.W * pM2.WPlane.X;
		pOut.YPlane.Y = YPlane.X * pM2.XPlane.Y + YPlane.Y * pM2.YPlane.Y + YPlane.Z * pM2.ZPlane.Y + YPlane.W * pM2.WPlane.Y;
		pOut.YPlane.Z = YPlane.X * pM2.XPlane.Z + YPlane.Y * pM2.YPlane.Z + YPlane.Z * pM2.ZPlane.Z + YPlane.W * pM2.WPlane.Z;
		pOut.YPlane.W = YPlane.X * pM2.XPlane.W + YPlane.Y * pM2.YPlane.W + YPlane.Z * pM2.ZPlane.W + YPlane.W * pM2.WPlane.W;
		pOut.ZPlane.X = ZPlane.X * pM2.XPlane.X + ZPlane.Y * pM2.YPlane.X + ZPlane.Z * pM2.ZPlane.X + ZPlane.W * pM2.WPlane.X;
		pOut.ZPlane.Y = ZPlane.X * pM2.XPlane.Y + ZPlane.Y * pM2.YPlane.Y + ZPlane.Z * pM2.ZPlane.Y + ZPlane.W * pM2.WPlane.Y;
		pOut.ZPlane.Z = ZPlane.X * pM2.XPlane.Z + ZPlane.Y * pM2.YPlane.Z + ZPlane.Z * pM2.ZPlane.Z + ZPlane.W * pM2.WPlane.Z;
		pOut.ZPlane.W = ZPlane.X * pM2.XPlane.W + ZPlane.Y * pM2.YPlane.W + ZPlane.Z * pM2.ZPlane.W + ZPlane.W * pM2.WPlane.W;
		pOut.WPlane.X = WPlane.X * pM2.XPlane.X + WPlane.Y * pM2.YPlane.X + WPlane.Z * pM2.ZPlane.X + WPlane.W * pM2.WPlane.X;
		pOut.WPlane.Y = WPlane.X * pM2.XPlane.Y + WPlane.Y * pM2.YPlane.Y + WPlane.Z * pM2.ZPlane.Y + WPlane.W * pM2.WPlane.Y;
		pOut.WPlane.Z = WPlane.X * pM2.XPlane.Z + WPlane.Y * pM2.YPlane.Z + WPlane.Z * pM2.ZPlane.Z + WPlane.W * pM2.WPlane.Z;
		pOut.WPlane.W = WPlane.X * pM2.XPlane.W + WPlane.Y * pM2.YPlane.W + WPlane.Z * pM2.ZPlane.W + WPlane.W * pM2.WPlane.W;
		return pOut;
	}
};

struct alignas(16) FTransform
{
	struct FQuat Rotation;      
	struct FVector Translation;
	unsigned char UnknownData00[0x4];
	struct FVector Scale3D;
	unsigned char UnknownData01[0x4];

	FMatrix ToMatrixWithScale()
	{
		FMatrix m;
		m.WPlane.X = Translation.X;
		m.WPlane.Y = Translation.Y;
		m.WPlane.Z = Translation.Z;

		float x2 = Rotation.X + Rotation.X;
		float y2 = Rotation.Y + Rotation.Y;
		float z2 = Rotation.Z + Rotation.Z;

		float xx2 = Rotation.X * x2;
		float yy2 = Rotation.Y * y2;
		float zz2 = Rotation.Z * z2;
		m.XPlane.X = (1.0f - (yy2 + zz2)) * Scale3D.X;
		m.YPlane.Y = (1.0f - (xx2 + zz2)) * Scale3D.Y;
		m.ZPlane.Z = (1.0f - (xx2 + yy2)) * Scale3D.Z;

		float yz2 = Rotation.Y * z2;
		float wx2 = Rotation.W * x2;
		m.ZPlane.Y = (yz2 - wx2) * Scale3D.Z;
		m.YPlane.Z = (yz2 + wx2) * Scale3D.Y;

		float xy2 = Rotation.X * y2;
		float wz2 = Rotation.W * z2;
		m.YPlane.X = (xy2 - wz2) * Scale3D.Y;
		m.XPlane.Y = (xy2 + wz2) * Scale3D.X;

		float xz2 = Rotation.X * z2;
		float wy2 = Rotation.W * y2;
		m.ZPlane.X = (xz2 + wy2) * Scale3D.Z;
		m.XPlane.Z = (xz2 - wy2) * Scale3D.X;

		m.XPlane.W = 0.0f;
		m.YPlane.W = 0.0f;
		m.ZPlane.W = 0.0f;
		m.WPlane.W = 1.0f;

		return m;
	}
};

static FMatrix ToMatrix(FVector rot)
{
	FVector origin = FVector{};
	float radPitch = (rot.X * float(M_PI) / 180.f);
	float radYaw = (rot.Y * float(M_PI) / 180.f);
	float radRoll = (rot.Z * float(M_PI) / 180.f);

	float SP = sinf(radPitch);
	float CP = cosf(radPitch);
	float SY = sinf(radYaw);
	float CY = cosf(radYaw);
	float SR = sinf(radRoll);
	float CR = cosf(radRoll);

	FMatrix matrix;
	matrix.XPlane.X = CP * CY;
	matrix.XPlane.Y = CP * SY;
	matrix.XPlane.Z = SP;
	matrix.XPlane.W = 0.f;

	matrix.YPlane.X = SR * SP * CY - CR * SY;
	matrix.YPlane.Y = SR * SP * SY + CR * CY;
	matrix.YPlane.Z = -SR * CP;
	matrix.YPlane.W = 0.f;

	matrix.ZPlane.X = -(CR * SP * CY + SR * SY);
	matrix.ZPlane.Y = CY * SR - CR * SP * SY;
	matrix.ZPlane.Z = CR * CP;
	matrix.ZPlane.W = 0.f;

	matrix.WPlane.X = origin.X;
	matrix.WPlane.Y = origin.Y;
	matrix.WPlane.Z = origin.Z;
	matrix.WPlane.W = 1.f;

	return matrix;
}

struct FRotator
{
public:
	int Pitch;
	int Yaw;
	int Roll;

	inline FRotator operator+(FRotator a) {
		return { a.Pitch + Pitch,a.Yaw + Yaw, a.Roll + Roll };
	}

	inline FRotator operator-(FRotator a) {
		return { a.Pitch - Pitch,a.Yaw - Yaw, a.Roll - Roll };
	}

	inline FRotator operator*(FRotator a) {
		return { a.Pitch * Pitch,a.Yaw * Yaw, a.Roll * Roll };
	}

	inline FRotator operator*(float a) {
		return { (int)round(a * Pitch),(int)round(a * Yaw), (int)round(a * Roll) };
	}
};

#define Const_URotation180        32768
#define Const_PI                  3.14159265358979323
#define Const_RadToUnrRot         10430.3783504704527
#define Const_UnrRotToRad         0.00009587379924285
#define Const_URotationToRadians  Const_PI / Const_URotation180 

FRotator VectorToRotation(FVector vVector)
{
	FRotator rRotation;

	rRotation.Yaw = atan2(vVector.Y, vVector.X) * Const_RadToUnrRot;
	rRotation.Pitch = atan2(vVector.Z, sqrt((vVector.X * vVector.X) + (vVector.Y * vVector.Y))) * Const_RadToUnrRot;
	rRotation.Roll = 0;

	return rRotation;
}

FVector RotationToVector(FRotator R)
{
	float fYaw = R.Yaw * Const_URotationToRadians;
	float fPitch = R.Pitch * Const_URotationToRadians;
	float CosPitch = cos(fPitch);
	FVector Vec = FVector(cos(fYaw) * CosPitch,
		sin(fYaw) * CosPitch,
		sin(fPitch));
	return Vec;
}

void AimAtVector(FVector TargetVec, FVector PlayerLocation, FRotator& AimRot)
{
	FVector AimVec = FVector(TargetVec.X - PlayerLocation.X, TargetVec.Y - PlayerLocation.Y, TargetVec.Z - PlayerLocation.Z);

	FRotator AimAtRot = VectorToRotation(AimVec);
	AimRot = AimAtRot;
}

struct FBoxSphereBounds {
	FVector Origin; // 0x0
	FVector BoxExtent; // 0xc
	float SphereRadius; // 0x18
};
