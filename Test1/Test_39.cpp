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
		this->color = "����";
		this->x = 0;
		this->y = 0;
		*/
		this->setPoint("����", 0, 0);

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
		this->setPoint("����", x, y);

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
	p2.setPoint("����");
	Point p3;
	p3.setPoint(10, 20);
	Point p4;
	p4.setPoint("�Ķ�", 11, 12);


	p1.showPoint();
	p2.showPoint();
	p3.showPoint();
	p4.showPoint();







	cout << "p1���� p3���� �߰�������ġ�� ���Ϸ����մϴ�." << endl;
	int midX = (p1.getX() + p3.getX()) / 2;
	int midY = (p1.getY() + p3.getY()) / 2;

	cout << "�߰����� ��ǥ�� (" << midX << "," << midY << ")�Դϴ�." << endl;

}