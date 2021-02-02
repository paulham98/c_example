// 순수가상함수 => "강제성" 수누가상함수가 여러개이면 전부 구현해줘야 객체 생성가능
#include<iostream>
#include<string>
using namespace std;
class A { // 순수가상함수를 한개이상 포함하는 클래스==추상클래스 : 객체생성xxx,개념을 정의한 클래스
public:
    virtual void draw() = 0; // 순수가상함수
};
class B :public A {
public:
    void draw() {
        cout << "B클래스" << endl;
    }
};
class C :public A {
public:
    void draw() {
        cout << "C클래스" << endl;
    }
};
void f(A* a) {
    a->draw();
}
void main() {

    A* arr[3];
    arr[0] = new B();
    arr[1] = new C();
    //arr[2] = new A(); -> 객체생성불가능!

    for (int i = 0; i < 2; i++) {
        f(arr[i]);
    }
    A** arr2 = new A * [3];
    arr2[0] = new B();
    arr2[1] = new C();
}