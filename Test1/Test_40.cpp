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

        cout << num << "번학생의 이름입력: ";
        cin >> this->name;

        do {
            cout << name << "학생의 성적입력: ";
            cin >> this->score;
        } while (this->score < 0 || 100 < this->score);

    }
    void show() {
        cout << this->num << "." << this->name << "학생 " << this->score << "점" << endl;
    }
};
void f(int N) {
    if (N >= 90) {
        cout << "A학점" << endl;
    }
    else if (N >= 60) {
        cout << "B학점" << endl;
    }
    else {
        cout << "C학점" << endl;
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

    // 학생 3명 생성
    // 단, 성적범위가 잘못되면 재입력(0~100)
    // 학생 상태를 show()해주시고,
    // 성적 데이터를 받아서 -> 90~100 A / 60~89 B / C : main()에서 출력해주세요!~~

    f(s1.getScore());
    f(s2.getScore());
    f(s3.getScore());


}