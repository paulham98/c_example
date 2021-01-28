#include<iostream>
#include<string>
using namespace std;
class Point {
	string color;
	int x;
	int y;
public:
	int getX() {
		return this->x;
	}
	int getY() {
		return this->y;
	}

	void setPoint() {
		/*
		this->color = "검정";
		this->x = 0;
		this->y = 0;
		*/
		this->setPoint("검정", 0, 0);

	}
	void setPoint(string color) {
		//this->color = color;
		//this->x = 0;
		//this->y = 0;
		this->setPoint(color, 0, 0);

	}
	void setPoint(int  x, int y) {
		//this->color = color;
		//this->x = x;
		//this->y = 0;
		this->setPoint("검정", x, y);

	}
	void setPoint(string color, int  x, int y) {
		this->color = color;
		this->x = x;
		this->y = y;
	}
	void showPoint() {
		cout << this->color << "(" << x << "," << y << ")" << endl;
	}
};
void main() {
	Point p1;
	p1.setPoint();
	Point p2;
	p2.setPoint("빨강");
	Point p3;
	p3.setPoint(10, 20);
	Point p4;
	p4.setPoint("파랑", 11, 12);


	p1.showPoint();
	p2.showPoint();
	p3.showPoint();
	p4.showPoint();







	cout << "p1점과 p3점의 중간지점위치를 구하려고합니다." << endl;
	int midX = (p1.getX() + p3.getX()) / 2;
	int midY = (p1.getY() + p3.getY()) / 2;

	cout << "중간점의 좌표는 (" << midX << "," << midY << ")입니다." << endl;

}