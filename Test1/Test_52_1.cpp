#include<iostream>
#include<string>
#include<time.h>
using namespace std;
class Pocket {
protected:
    string name;
    int level;
    string type;
    bool game() {
        srand(time(NULL));
        if (rand() % 2) {
            cout << "공격성공! ";
            this->level++;
            return true;
        }
        else {
            cout << "공격실패..." << endl;
            return false;
        }
    }
public:
    Pocket(string name, int level, string type) {
        this->name = name;
        this->level = level;
        this->type = type;
    }
    virtual void attack() = 0;
    
    virtual void speak() = 0;
    
};
class Elec :public Pocket {
public:
    Elec(string name, int level) :Pocket(name, level, "전기") {

    }
    void attack() {// 피카츄 라이츄안에서 attack을 따로 정의하면 가상함수 사용할수있음
        if (game()) {
            cout <<   "백만볼트!!!" << endl;
        }
    }
};
class Pika : public Elec {
public:
    Pika(int level = 5) :Elec("피카츄", level) {

    }
    void speak() {
        cout << "피카피카" << endl;
    }
};
class Rai : public Elec {
public:
    Rai(int level = 5) :Elec("라이츄", level) {

    }
    void speak() {
        cout << "라이츄~" << endl;
    }
};
void f(Pocket* p) {
    p->attack();
}
void main() {
    /*
    Pika p = Pika();
    p.attack();
    p.attack();
    p.attack();
    p.speak();
    */
    srand(time(NULL));

    Pocket* arr[2];
    arr[0] = new Pika();
    arr[1] = new Rai();
    f(arr[0]);



    Pocket** book = new Pocket * [2];
    book[0] = new Pika();
    book[1] = new Rai();

    for (int i = 0; i < 2; i++) {
        book[i]->attack();
        book[i]->speak();
    }

}