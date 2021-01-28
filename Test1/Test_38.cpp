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
        printf("�ڵ��� ���� �����Ȳ���\n");
        cout << this->user << "���� �ڵ���: ";
        if (this->power) {
            cout << "ON" << endl;
        }
        else {
            cout << "OFF" << endl;
        }
        cout << "����ӵ�: " << this->speed << endl;
        cout << "���Ѽӵ�: " << this->maxSpeed << endl;
    }
};

void add(int a, int b) {
    cout << "ù��°�Լ� ";
    cout << a + b << endl;
}
void add(int a, int b, int c) {
    cout << "�ι�°�Լ� ";
    cout << a + b + c << endl;
}
void add(double a, double b) {
    cout << "����°�Լ� ";
    cout << a + b << endl;
}

void main() {
    /*
    add(10, 20);
    add(10, 20,30);
    add(11.1, 22.2);
    */
    // [�����ε�]
    // : �Լ��� ����� ������
    //   ������ ����,Ÿ���� �ٸ���
    //   �Լ����� �����ϰ� �����ϴ°��� ���


    Car c1;
    c1.setCar("kim");

    Car c2;
    c2.setCar("lee", 200);

    Car c3;
    c3.setCar("park", 300, 60, true);


    c1.showCar();
    c2.showCar();
    c3.showCar();





    // �����̸�
    // �õ�OFF,0,120

    // �����̸�,200
    // �õ�OFF,0

    // �����̸�,200,�õ�ON,60


}