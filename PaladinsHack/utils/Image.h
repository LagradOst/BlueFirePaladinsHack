#ifndef ROXLU_IMAGEH
#define ROXLU_IMAGEH

// AWESOME!!: http://nothings.org/

#include "stb_image.h"

struct Image {
	int width;
	int height;
	int bpp;
	unsigned char* pixels;
	
	Image();
	~Image();
	bool load(const char* filepath);
	int getWidth();
	int getHeight();
	int getComponents();
	unsigned char* getPixels();
};

inline int Image::getComponents() {
	return bpp;
}

inline int Image::getWidth() {
	return width;
}

inline int Image::getHeight() {
	return height;
}

inline unsigned char* Image::getPixels() {
	return pixels;
}

#endif