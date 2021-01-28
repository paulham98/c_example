#include<iostream>
#include<string>
using namespace std;
class Car {
    bool power;
    int speed;
    int maxSpeed;
    string user;
public:
    void setCar(string user) {
        this->power = false;
        this->speed = 0;
        this->maxSpeed = 120;
        this->user = user;
    }
    void setCar(string user, int maxSpeed) {
        this->power = false;
        this->speed = 0;
        this->maxSpeed = maxSpeed;
        this->user = user;
    }
    void setCar(string user, int maxSpeed, int speed, bool power) {
        this->power = power;
        this->speed = speed;
        this->maxSpeed = maxSpeed;
        this->user = user;
    }
    void showCar() {
        printf("자동차 안의 멤버상황출력\n");
        cout << this->user << "님의 자동차: ";
        if (this->power) {
            cout << "ON" << endl;
        }
        else {
            cout << "OFF" << endl;
        }
        cout << "현재속도: " << this->speed << endl;
        cout << "제한속도: " << this->maxSpeed << endl;
    }
};

void add(int a, int b) {
    cout << "첫번째함수 ";
    cout << a + b << endl;
}
void add(int a, int b, int c) {
    cout << "두번째함수 ";
    cout << a + b + c << endl;
}
void add(double a, double b) {
    cout << "세번째함수 ";
    cout << a + b << endl;
}

void main() {
    /*
    add(10, 20);
    add(10, 20,30);
    add(11.1, 22.2);
    */
    // [오버로딩]
    // : 함수의 기능이 같은데
    //   인자의 개수,타입이 다를때
    //   함수명을 동일하게 선언하는것을 허용


    Car c1;
    c1.setCar("kim");

    Car c2;
    c2.setCar("lee", 200);

    Car c3;
    c3.setCar("park", 300, 60, true);


    c1.showCar();
    c2.showCar();
    c3.showCar();





    // 차주이름
    // 시동OFF,0,120

    // 차주이름,200
    // 시동OFF,0

    // 차주이름,200,시동ON,60


}