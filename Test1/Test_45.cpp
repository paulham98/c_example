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
        cout << "이름입력: ";
        cin >> this->name;
        this->type = type;
    }
    void Power() {
        if (this->power) {
            this->power = false;
            cout << "전원OFF중..." << endl;
        }
        else {
            this->power = true;
            cout << "전원ON..!!!" << endl;
        }
    }
    void call() {
        if (this->power) {
            cout << "전화연결중..." << endl;
            return;
        }
        cout << "전원OFF상태" << endl;
    }
    void show() {
        if (this->power) {
            cout << this->name << "님의 " << this->type << " 이용중..." << endl;
            return;
        }
        cout << "전원OFF상태" << endl;
    }
};
void main() {

    Phone* p1 = new Phone("갤럭시");
    Phone* p2 = new Phone("아이폰");

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