#include<stdio.h>

struct Rectangle{
private:
	int xLow, yLow, height, width;

public:
	inline int getHeight(int xLow, int yLow) {
		this->xLow = xLow;
		this->yLow = yLow;
		int h = xLow * yLow;
		printf("≥Ù¿Ã: %d", &h);
		return h;
	}
	inline int GetWidth() {

	}
};