#include<iostream>
#include<string>
using namespace std;
class C {
	int a;
	string b;
public:
    C() { // 생성자: 클래스명과 동일한이름의 함수() -> 매개변수 설정,오버로딩,디폴트 인자
       // 리턴타입명시xxx
        cout << "생성자" << endl;
        this->a = 10; // 초기화가능
        this->b = "apple";
    }
    C(int a, string b = "banana") {
        cout << "생성자2" << endl;
        this->a = a;
        this->b = b;
    }
    ~C() {
        cout << this->b << " 소멸자" << endl;
    }
    void show() {
        cout << this->a << " " << this->b << endl;
    }
};
void main() {

    // C c;   ==   C c=C();
    C c = C();
    C c2 = C(11);
    C c3 = C(11, "kiwi");
    c.show();
    c2.show();
    c3.show();


    // 저장공간
    // heap   VS   stack

    // 동적할당-> 프로그램이 실행된 후에 크기가 결정 // 지역변수,매개변수 -> 프로그램이 실행되기 이전에 크기가 결정
    // 프로그래머가 할당

    // malloc(),free()               VS           new,delete
    // 함수->라이브러리                            연산자
    // 할당받을 공간의 크기를 인자로 주기위해,       할당받을 공간의 크기를 자동지정
    // sizeof()연산자를 사용해야함
    // 형변환(캐스팅)을 필요로함                    해당하는 타입의 포인터를 자동리턴
    // 초기값을 설정할수없음                        초기값을 설정할수있음
    //   -> calloc()                                -> 생성자
    // 저장공간크기를 다루기 용이                   크기할당->복사->원래의 공간에대해 메모리해제
    //   -> realloc(): 크기변경하여 재할당

   

}