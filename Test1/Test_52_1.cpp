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
    void attack() {
        if (game()) {
            cout << "공격가능!" << endl;
        }
    }
    void speak() {
        cout << "울음소리" << endl;
    }
};
class Elec :public Pocket {
public:
    Elec(string name, int level) :Pocket(name, level, "전기") {

    }
    void attack() {
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
void main() {

    Pika p = Pika();
    p.attack();
    p.attack();
    p.attack();
    p.speak();

}