#include<iostream>
#include<string>
using namespace std;
class C { // C클래스: 베이스클래스,부모클래스
private: // 클래스의 기본설정.폐쇄성.자기자신만 접근가능함
    int x;
protected: // 자기자신과 자신을 상속받은 자식클래스에서도 접근할수있음
    int y;
public:
    int z;
    void f1() {
        cout << "C클래스" << endl;
    }
};
class D :protected C { // D클래스: 파생클래스,자식클래스
   // 해당 공개범위보다 더 넓은 속성에대해,
   // 해당 공개범위로 상속받겠다!
public:
    void f2() {
        cout << "D클래스" << endl;
    }
};
void main() {

    C c1 = C();
    D d1 = D();




}