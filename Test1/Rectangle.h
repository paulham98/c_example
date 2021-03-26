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

	inline int GetWidth(int width) {
		this->width = width;
		printf("??: %d", &width);// garo
		return width;
	};
};