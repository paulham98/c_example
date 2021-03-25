#include<iostream>
#include "Rectangle.h"

int main() {
	Rectangle rec = Rectangle();
    int x, y;
    scanf("%d %d", &x, &y);
    rec.getHeight(x, y);
}