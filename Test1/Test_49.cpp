#include<iostream>
#include<string>
using namespace std;
class C {
public:
    int x;
    C(int x = 0) {
        this->x = x;
    }
    /*
    C() {
       //cout << "C������ "<<this << endl;
    }
    */
};
class D :public C {
public:
    int y;
    D(int x, int y) {
        // �θ��� �⺻�����ڸ� ȣ��!��
        this->x = x;
        this->y = y;
        //cout << "D������ " << this << endl;
    }
};
void main() {
    C c = C(11);
    D d = D(10, 20);

}