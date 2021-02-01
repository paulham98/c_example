#include<iostream>
#include<string>
using namespace std;
class Point {
protected:
    int x;
    int y;
public:
    Point(int x = 0, int y = 0) {
        this->x = x;
        this->y = y;
    }
    void showPoint() {
        cout << "(" << this->x << "," << this->y << ")" << endl;
    }
};
class ColorPoint :public Point {
protected:
    string color;
public:
    ColorPoint(int x, int y, string color) {
        this->x = x;
        this->y = y;
        this->color = color;
    }
    void showColorPoint() {
        cout << this->color << "(" << this->x << "," << this->y << ")" << endl;
    }
};
void main() {

    Point p1 = Point(10, 20);
    ColorPoint p2 = ColorPoint(1, 2, "����");
    

    p1.showPoint();
    p2.showPoint(); // �ڵ��� ����->�޸𸮰���xxx!!
    // �θ� ���ǵǾ��ִ� �Լ���,
    // �ڽĿ��� ���α�ɸ� �ٸ��� �̿��ϰ������� �߻�!





    // �Լ����� ������ �Լ������� ������ ����� ���
    // 1) �����ε�
    //    : ���ڰ���,Ÿ��,���ϰ��� �ٸ� (��Ӱ� ����)
    // 2) �������̵�
    //    : ������,��Ӱ��迡�� �߻�,input�� output�� ��� ����

}