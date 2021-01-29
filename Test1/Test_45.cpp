#include<iostream>
#include<string>
using namespace std;
class C {
    int i;
    string str;
public:
    void show() {
        cout << this->i << " " << this->str << endl;
    }
    C(int i = 0, string str = "apple") {
        this->i = i;
        this->str = str;
    }
};
class Phone {
    bool power;
    string name;
    string type;
public:
    Phone(string type) {
        this->power = false;
        cout << "�̸��Է�: ";
        cin >> this->name;
        this->type = type;
    }
    void Power() {
        if (this->power) {
            this->power = false;
            cout << "����OFF��..." << endl;
        }
        else {
            this->power = true;
            cout << "����ON..!!!" << endl;
        }
    }
    void call() {
        if (this->power) {
            cout << "��ȭ������..." << endl;
            return;
        }
        cout << "����OFF����" << endl;
    }
    void show() {
        if (this->power) {
            cout << this->name << "���� " << this->type << " �̿���..." << endl;
            return;
        }
        cout << "����OFF����" << endl;
    }
};
void main() {

    Phone* p1 = new Phone("������");
    Phone* p2 = new Phone("������");

    p1->call();
    p1->Power();
    p1->call();

    cout << endl;

    p2->Power();
    p2->show();



    /*
    C* c1 = new C();
    c1->show();

    C* c2 = new C(100);
    c2->show();
    */
}