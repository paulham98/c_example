#include<iostream>
#include<string>
using namespace std;
class C {

public:
    int i;
    C() {
        this->i = 10;
        cout << "기본생성자: " << this->i << endl;
    }
    C(int i) {
        this->i = i;
        cout << "생성자: " << this->i << endl;
    }
    ~C() {
        cout << "소멸자: " << this->i << endl;
    }
};
void main() {

    C* data = new C[3];
    for (int i = 0; i < 3; i++) {
        data[i] = C(i + 1);
        cout << data[i].i << endl;
    }





}