/*
��ü������

1)�߻�ȭ

2)ĸ��ȭ
�������� + �ڵ� ���� ����

3)���
class Person << �θ�Ŭ����
class Student << �ڽ�Ŭ����

4)������
-> ��ü(�־�)�� ���� �Լ�
*/
// [��ü�����ڵ�]
// class
#include<iostream>
#include<string>
#include<time.h>
using namespace std;
class Car { // ��⼺
public: // Ŭ������ �⺻������ private ������ �Ǿ��ִ�.
    bool power;
    int speed;
    int maxSpeed;
    string user;
    void setCar(bool power, int speed, int maxSpeed, string user) {
        this->power = power;
        this->speed = speed;
        this->maxSpeed = maxSpeed;
        this->user = user;
        // �ڽ��� �ּҸ� ����ϴ� ������ : *this
        


    }
    void showCar() {
        printf("�ڵ��� ���� �����Ȳ���\n");
        cout << user << "���� �ڵ���: ";
        if (power) {
            cout << "ON" << endl;
        }
        else {
            cout << "OFF" << endl;
        }
        cout << "����ӵ�: " << speed << endl;
        cout << "���Ѽӵ�: " << maxSpeed << endl;
    }
};
class Student {
public:
    string name;
    int num;
    int score;
    char grade;
    void setStudent() {
        num = rand() % 89 + 11; // 11~99

        cout << num << "���л��� �̸��Է�: ";
        cin >> name;

        cout << name << "�л��� �����Է�: ";
        cin >> score;

        if (score > 100 || 0 > score) {
            grade = 'F';
        }
        else if (score >= 90) {
            grade = 'A';
        }
        else if (score > 60) {
            grade = 'B';
        }
        else {
            grade = 'C';
        }
    }
    void showInfo() {
        printf("%d��° �л�\n", num);
        cout << name << score << "[" << grade << "]" << endl;
    }
};
void main() {
    /*
    Car c1;
   c1.setCar(true, 0, 120, "kim");

   c1.showCar();

   Car c2;
   c2.setCar(false, 60, 100, "lee");
   c2.showCar();

    */
    srand(time(NULL));


    Student std1;
    std1.setStudent();

    std1.showInfo();


}