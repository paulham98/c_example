#include"pointheader.h"

void main() {
	struct point p1 = { "pink", 10, 10 };
	struct point p2 = { "red", 20, 20 };
	
	p1.mid(p2);
	p1.showPoint();
	p2.showPoint();
}