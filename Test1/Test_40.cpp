#include<iostream>
#include<string>
#include<time.h>
using namespace std;
class Student {
    int num;
    int score;
    string name;
public:
    int getScore() {
        return this->score;
    }
    void setStudent() {

        this->num = rand() % 89 + 11; // 11~99

        cout << num << "���л��� �̸��Է�: ";
        cin >> this->name;

        do {
            cout << name << "�л��� �����Է�: ";
            cin >> this->score;
        } while (this->score < 0 || 100 < this->score);

    }
    void show() {
        cout << this->num << "." << this->name << "�л� " << this->score << "��" << endl;
    }
};
void f(int N) {
    if (N >= 90) {
        cout << "A����" << endl;
    }
    else if (N >= 60) {
        cout << "B����" << endl;
    }
    else {
        cout << "C����" << endl;
    }
}
void main() {

    Student s1, s2, s3;

    s1.setStudent();
    s2.setStudent();
    s3.setStudent();

    s1.show();
    s2.show();
    s3.show();

    // �л� 3�� ����
    // ��, ���������� �߸��Ǹ� ���Է�(0~100)
    // �л� ���¸� show()���ֽð�,
    // ���� �����͸� �޾Ƽ� -> 90~100 A / 60~89 B / C : main()���� ������ּ���!~~

    f(s1.getScore());
    f(s2.getScore());
    f(s3.getScore());


}