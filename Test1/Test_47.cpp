#include<iostream>
#include<string>
using namespace std;
class Point {
	int x;
	int y;
	string color;
public:
    Point() {
    // �迭 []���� ������ ���� �⺻������ ���
    }
    Point(int x, int y, string color) {
        this->x = x;
        this->y = y;
        this->color = color;
        cout << "�������Ϸ�!" << endl;
    }
    void setColor(string color) {
        this->color = color;
        cout << "������Ϸ�!" << endl;
    }
    void show() {
        cout << this->color << "(" << this->x << "," << this->y << ")" << endl;
    }
    void move(int x = 1) {
        this->x += x;
        this->y += x;
        cout << "���̵��Ϸ�!" << endl;
    }
    void midPoint(Point p) {
        cout << "�߰���ǥ�� (" << (this->x + p.x) / 2 << "," << (this->y + p.y) / 2 << ")" << endl;
    }
    /*
    1. �����Լ�(Point p1, Point p2)
    2.  ���ο��� getx, gety����
    3. ���� �Ѱ�
    */
    }; 
    void main() {

        int N;
        printf("���� ������ �Է��ϼ���.  ");
        cin >> N;

        Point* p = new Point[N];

        for (int i = 0; i < N; i++) {
            int x, y;
            string color;
            cout << "x��ǥ�Է�: ";
            cin >> x;
            cout << "y��ǥ�Է�: ";
            cin >> y;
            cout << "���Է�: ";
            cin >> color;
            p[i] = Point(x, y, color);
        }
        int act, num;
        while (1) {

            cout << "1.������ 2.��ǥ�̵� 3.�߰������ 4.����" << endl;
            cin >> act;
            if (act == 1) {
                cout << "�����?  ";
                cin >> num;
                string color;
                cout << "�����һ��Է�: ";
                cin >> color;
                p[num - 1].setColor(color);
            }
            else if (act == 2) {
                int x;
                cout << "�����?  ";
                cin >> num;
                cout << "�̵��Ÿ�: ";
                cin >> x;
                if (x == -1) p[num - 1].move();
                else p[num - 1].move(x);
            }
            else if (act == 3) {
                int x, y;
                cout << "1�����Է�: ";
                cin >> x;
                cout << "2�����Է�: ";
                cin >> y;
                p[x - 1].midPoint(p[y - 1]);
            }
            else if (act == 4) {
                break;
            }
            else {
                cout << "���Է�!" << endl;
            }


            cout << "+++�����+++" << endl;
            for (int i = 0; i < N; i++) {
                p[i].show();
            }
            cout << endl;
        }




    }