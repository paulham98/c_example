#include<iostream>
#include<string>
using namespace std;
class Student {
    int score;
public:
    void setScore(int score) { // flag
       // 미응시학생 점수를 -1점 처리해주세요.
       // 잘못된점수를 가진학생은 -2점 처리해주세요.
        if (score < -1 || 100 < score) {
            this->score = -2;
        }
        else {
            this->score = score;
        }

    }
    void show() {
        // 미응시학생입니다.
        // 점수가 유효하지않습니다.선생님께 문의하세요!
        if (this->score == -1) {
            cout << "미응시학생입니다." << endl;
        }
        else if (this->score == -2) {
            cout << "점수가 유효하지않습니다.선생님께 문의하세요!" << endl;
        }
        else {
            cout << "점수는 " << this->score << "점입니다." << endl;
        }

    }
};
void f(int num, int num2 = 1234) { // 디폴트인수설정 ←
    cout << num << endl;
    cout << num2 << endl;
}
void main() {

    // [디폴트 인수]
    // 함수의 인자에 값을 기본적으로 지정

    f(1);
    // 디폴트 인수를 지정해놓았어도,
    // 전달인자값이 선적용된다.
    Student s1, s2, s3;
    s1.setScore(80);
    s2.setScore(-1);
    s3.setScore(1000);

    s1.show();
    s2.show();
    s3.show();

}