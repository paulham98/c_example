#include<iostream>
#include<string>
using namespace std;
class Shape {
protected:
	double area;
public:
	virtual void draw() {
		cout << "도형 그리기" << endl;
	}
};
class Circle : public Shape {
	const double PI = 3.14;
	int radius;
public:
	Circle(int radius) {
		this->radius = radius;
		this->area = this->radius * this->radius * this->PI;
		cout << "원_생성완료" << endl;
	}
	void draw() {
		cout << "원그리기: " << this->area << endl;
	}
	
};
class Rec : public Shape {
	int width;
	int vertical;
public:
	Rec(int width) {
		this->width = width;
		this->area = this->width * this->width;
	}
	Rec(int width, int vertical) {
		this->width = width;
		this->vertical = vertical;
		this->area = this->width * this->vertical;
	}
	void draw() {
		cout << "사각형그리기: " << this->area << endl;
	}
};
class Tri : public Shape {
	int width;
	int vertical;
public:
	Tri(int width, int vertical) {
		this->width = width;
		this->vertical = vertical;
		this->area = (this->width * this->vertical) / 2.0;
		cout << "삼각형_생성완료: " << endl;
	}
	void draw() {
		cout << "삼각형그리기: " << this->area << endl;
	}
};
void f(Shape* s) {
	s->draw();
}
void main() {
	/*
	Shape s;
	Circle c = Circle(1);
	//s.draw();
	//c.draw();
	Shape* s1 = new Shape();
	Circle* c1 = new Circle(1);

	//f(s1);
	//f(c1);

	Rec r1 = Rec(2);
	Rec* r2 = new Rec(3, 4);
	Tri* t = new Tri(10, 5);

	f(&r1);
	f(r2);
	f(t);
	*/

	Shape* s[5];
	s[0] = new Circle(1);
	s[1] = new Rec(2);
	s[2] = new Rec(3, 4);
	s[3] = new Tri(10, 5);
	s[4] = new Shape();

	for (int i = 0; i < 5; i++) {
		f(s[i]);
	}
}