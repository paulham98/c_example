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
    virtual void attack() = 0;
    
    virtual void speak() = 0;
    
};
class Elec :public Pocket {
public:
    Elec(string name, int level) :Pocket(name, level, "����") {

    }
    void attack() {// ��ī�� ������ȿ��� attack�� ���� �����ϸ� �����Լ� ����Ҽ�����
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
class Rai : public Elec {
public:
    Rai(int level = 5) :Elec("������", level) {

    }
    void speak() {
        cout << "������~" << endl;
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