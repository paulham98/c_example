#include<iostream>
#include<string>
using namespace std;
class Point {
	int x;
	int y;
	string color;
public:
    Point() {
    // 배열 []공간 생성을 위한 기본생성자 명시
    }
    Point(int x, int y, string color) {
        this->x = x;
        this->y = y;
        this->color = color;
        cout << "점생성완료!" << endl;
    }
    void setColor(string color) {
        this->color = color;
        cout << "색변경완료!" << endl;
    }
    void show() {
        cout << this->color << "(" << this->x << "," << this->y << ")" << endl;
    }
    void move(int x = 1) {
        this->x += x;
        this->y += x;
        cout << "점이동완료!" << endl;
    }
    void midPoint(Point p) {
        cout << "중간좌표는 (" << (this->x + p.x) / 2 << "," << (this->y + p.y) / 2 << ")" << endl;
    }
    /*
    1. 전역함수(Point p1, Point p2)
    2.  메인에서 getx, gety쓰기
    3. 지금 한거
    */
    }; 
    void main() {

        int N;
        printf("점의 개수를 입력하세요.  ");
        cin >> N;

        Point* p = new Point[N];

        for (int i = 0; i < N; i++) {
            int x, y;
            string color;
            cout << "x좌표입력: ";
            cin >> x;
            cout << "y좌표입력: ";
            cin >> y;
            cout << "색입력: ";
            cin >> color;
            p[i] = Point(x, y, color);
        }
        int act, num;
        while (1) {

            cout << "1.색변경 2.좌표이동 3.중간점출력 4.종료" << endl;
            cin >> act;
            if (act == 1) {
                cout << "몇번점?  ";
                cin >> num;
                string color;
                cout << "변경할색입력: ";
                cin >> color;
                p[num - 1].setColor(color);
            }
            else if (act == 2) {
                int x;
                cout << "몇번점?  ";
                cin >> num;
                cout << "이동거리: ";
                cin >> x;
                if (x == -1) p[num - 1].move();
                else p[num - 1].move(x);
            }
            else if (act == 3) {
                int x, y;
                cout << "1번점입력: ";
                cin >> x;
                cout << "2번점입력: ";
                cin >> y;
                p[x - 1].midPoint(p[y - 1]);
            }
            else if (act == 4) {
                break;
            }
            else {
                cout << "재입력!" << endl;
            }


            cout << "+++점목록+++" << endl;
            for (int i = 0; i < N; i++) {
                p[i].show();
            }
            cout << endl;
        }




    }