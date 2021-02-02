#include<iostream>
#include<string>
using namespace std;
class A {
public:
    int a;
    A() {
        this->a = 10;
    }
    virtual void show() { // �����Լ�: �Ʒ� �������̵� �Ȱ� �ִ��� Ȯ�ν�Ŵ
        cout << "A: " << this->a << endl;
    }
};
class B :public A {
public:
    int b;
    B() {
        this->b = 20;
    }
    void show() {
        cout << "B: " << this->a << " " << this->b << endl;
    }
};
class C :public A {
public:
    int c;
    C() {
        this->c = 30;
    }
    void show() {
        cout << "C: " << this->a << " " << this->c << endl;
    }
};

void f(A* a) { // [�����Լ��� �ʿ伺]
    a->show();
}
void main() {
    /*
    A* a1 = new A();
    B* b1 = new B();

    f(a1);
    f(b1);



    A a2 = A();
    B b2 = B();
    f(&a2);
    f(&b2);
    */
    A* arr[3];

    arr[0] = new A();
    arr[1] = new B();
    arr[2] = new C();

    for (int i = 0; i < 3; i++) {
        f(arr[i]);
    }



}