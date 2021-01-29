// 클래스 Point을 정의해주세요!~~
// 1) 멤버 색깔,x좌표,y좌표
// 2) 생성자를 정의해주세요!!
// 2-2) 검정(0,0)  빨강(0,0)  검정(10,20)  빨강(11,12)
// 3) show()
#include<iostream>
#include<string>
using namespace std;
class Point {
    string color;
    int x;
    int y;
public:
    Point(int x, int y, string color = "검정") {
        this->x = x;
        this->y = y;
        this->color = color;
    }
    Point(string color = "검정", int x = 0, int y = 0) {
        this->color = color;
        this->x = x;
        this->y = y;
    }
    void show() {
        cout << this->color << "(" << this->x << "," << this->y << ")" << endl;
    }
};
void main() {
    /*
    Point p1 = Point();
    Point p2 = Point("빨강");
    Point p3 = Point(10, 20);
    Point p4 = Point("빨강",11,12);
    Point p5 = Point(11, 12,"빨강");

    p1.show();
    p2.show();
    p3.show();
    p4.show();
    p5.show();
    */

    /*
    int* i = new int;
    cout << "i: " << *i << endl;

    int* i2 = new int();
    cout << "i2: " << *i2 << endl;

    int* i3 = new int(10);
    cout << "i3: " << *i3 << endl;
    */

    /*
    int N = 5;
    int* arr = new int[N];
    for (int i = 0; i < N; i++) {
        arr[i] = i + 1;
        //*(arr+i) = i + 1;
        cout << arr[i] << " ";
    }
    cout << endl;



    int** arr2 = new int* [5];
    for (int i = 0; i < 5; i++) {
        arr2[i] = new int(i + 1);
        cout << *arr2[i] << " ";
    }
    cout << endl;
    */

    int N = 5;
    int a = 0;
    int* arr = new int[N];
    for (int i = 0; i < N; i++) {
        cout << i + 1 << "번학생의 점수입력:";
        cin >> a;
        arr[i] = a;
        //*(arr+i) = i + 1;
    }
    cout << endl;
    int max = -1;
    int maxIndex = -1;
    for (int i = 0; i < N ; i++) {   
            if (max < arr[i]) {
                max = arr[i];
                maxIndex = i;
            }
        }
    cout << "1등은 " << (maxIndex + 1) << "번학생입니다.";
    cout << " [" << max << "점]" << endl;













    int N;
    cout << "학생수: ";
    cin >> N;

    int** stu = new int* [N];

    double max = -1.0;
    int maxIndex = -1;
    for (int i = 0; i < N; i++) {

        stu[i] = new int[2];
        cout << i + 1 << "번학생의 점수정보저장중..." << endl;

        int sum = 0;
        for (int j = 0; j < 2; j++) {
            if (j == 0) {
                cout << "중간고사: ";
            }
            else {
                cout << "기말고사: ";
            }
            cin >> stu[i][j];

            sum += stu[i][j];
        }
        cout << endl;

        double avg = sum / 2.0;

        if (max < avg) {
            max = avg;
            maxIndex = i;
        }
    }

    cout << "1등은 " << maxIndex + 1 << "번입니다." << endl;










}