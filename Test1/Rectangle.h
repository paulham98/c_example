#include<stdio.h>

struct Rectangle{
private:
	int xLow, yLow, height, width;

public:
	inline int getHeight(int height) {
		this->height = height;
		printf("??: %d", &height);//sero
		return height;
	}
	inline int getHeight(int xLow, int yLow) {
		this->xLow = xLow;
		this->yLow = yLow;
		int h = xLow * yLow;
		printf("³ôÀÌ: %d", &h);
		return h;
	}

	inline int GetWidth(int width) {
		this->width = width;
		printf("??: %d", &width);// garo
		return width;
	}
};
