#include<iostream>
#include<string>
using namespace std;
class Student {
    int score;
public:
    void setScore(int score) { // flag
       // �������л� ������ -1�� ó�����ּ���.
       // �߸��������� �����л��� -2�� ó�����ּ���.
        if (score < -1 || 100 < score) {
            this->score = -2;
        }
        else {
            this->score = score;
        }

    }
    void show() {
        // �������л��Դϴ�.
        // ������ ��ȿ�����ʽ��ϴ�.�����Բ� �����ϼ���!
        if (this->score == -1) {
            cout << "�������л��Դϴ�." << endl;
        }
        else if (this->score == -2) {
            cout << "������ ��ȿ�����ʽ��ϴ�.�����Բ� �����ϼ���!" << endl;
        }
        else {
            cout << "������ " << this->score << "���Դϴ�." << endl;
        }

    }
};
void f(int num, int num2 = 1234) { // ����Ʈ�μ����� ��
    cout << num << endl;
    cout << num2 << endl;
}
void main() {

    // [����Ʈ �μ�]
    // �Լ��� ���ڿ� ���� �⺻������ ����

    f(1);
    // ����Ʈ �μ��� �����س��Ҿ,
    // �������ڰ��� ������ȴ�.
    Student s1, s2, s3;
    s1.setScore(80);
    s2.setScore(-1);
    s3.setScore(1000);

    s1.show();
    s2.show();
    s3.show();

}