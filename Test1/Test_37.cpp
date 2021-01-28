/*
객체지향언어

1)추상화

2)캡슐화
정보은닉 + 코드 재사용 가능

3)상속
class Person << 부모클래스
class Student << 자식클래스

4)다형성
-> 주체(주어)가 생긴 함수
*/
// [객체지향코딩]
// class
#include<iostream>
#include<string>
#include<time.h>
using namespace std;
class Car { // 폐쇄성
public: // 클래스는 기본적으로 private 설정이 되어있다.
    bool power;
    int speed;
    int maxSpeed;
    string user;
    void setCar(bool power, int speed, int maxSpeed, string user) {
        this->power = power;
        this->speed = speed;
        this->maxSpeed = maxSpeed;
        this->user = user;
        // 자신의 주소를 기억하는 포인터 : *this
        


    }
    void showCar() {
        printf("자동차 안의 멤버상황출력\n");
        cout << user << "님의 자동차: ";
        if (power) {
            cout << "ON" << endl;
        }
        else {
            cout << "OFF" << endl;
        }
        cout << "현재속도: " << speed << endl;
        cout << "제한속도: " << maxSpeed << endl;
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

        cout << num << "번학생의 이름입력: ";
        cin >> name;

        cout << name << "학생의 성적입력: ";
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
        printf("%d번째 학생\n", num);
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