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
       //cout << "C생성자 "<<this << endl;
    }
    */
};
class D :public C {
public:
    int y;
    D(int x, int y) {
        // 부모의 기본생성자를 호출!☆
        this->x = x;
        this->y = y;
        //cout << "D생성자 " << this << endl;
    }
};
void main() {
    C c = C(11);
    D d = D(10, 20);

}