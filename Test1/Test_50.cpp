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
    ColorPoint p2 = ColorPoint(1, 2, "검정");
    

    p1.showPoint();
    p2.showPoint(); // 코드의 재사용->메모리공유xxx!!
    // 부모에 정의되어있던 함수를,
    // 자식에서 내부기능만 다르게 이용하고싶은경우 발생!





    // 함수명이 동일한 함수에대해 선언을 허용한 경우
    // 1) 오버로딩
    //    : 인자개수,타입,리턴값이 다름 (상속과 무관)
    // 2) 오버라이딩
    //    : 재정의,상속관계에서 발생,input과 output이 모두 동일

}