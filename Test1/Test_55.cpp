// ���������Լ� => "������" ���������Լ��� �������̸� ���� ��������� ��ü ��������
#include<iostream>
#include<string>
using namespace std;
class A { // ���������Լ��� �Ѱ��̻� �����ϴ� Ŭ����==�߻�Ŭ���� : ��ü����xxx,������ ������ Ŭ����
public:
    virtual void draw() = 0; // ���������Լ�
};
class B :public A {
public:
    void draw() {
        cout << "BŬ����" << endl;
    }
};
class C :public A {
public:
    void draw() {
        cout << "CŬ����" << endl;
    }
};
void f(A* a) {
    a->draw();
}
void main() {

    A* arr[3];
    arr[0] = new B();
    arr[1] = new C();
    //arr[2] = new A(); -> ��ü�����Ұ���!

    for (int i = 0; i < 2; i++) {
        f(arr[i]);
    }
    A** arr2 = new A * [3];
    arr2[0] = new B();
    arr2[1] = new C();
}