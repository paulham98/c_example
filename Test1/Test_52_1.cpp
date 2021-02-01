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
            cout << "���ݼ���! ";
            this->level++;
            return true;
        }
        else {
            cout << "���ݽ���..." << endl;
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
            cout << "���ݰ���!" << endl;
        }
    }
    void speak() {
        cout << "�����Ҹ�" << endl;
    }
};
class Elec :public Pocket {
public:
    Elec(string name, int level) :Pocket(name, level, "����") {

    }
    void attack() {
        if (game()) {
            cout <<   "�鸸��Ʈ!!!" << endl;
        }
    }
};
class Pika : public Elec {
public:
    Pika(int level = 5) :Elec("��ī��", level) {

    }
    void speak() {
        cout << "��ī��ī" << endl;
    }
};
void main() {

    Pika p = Pika();
    p.attack();
    p.attack();
    p.attack();
    p.speak();

}