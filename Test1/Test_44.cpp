// Ŭ���� Point�� �������ּ���!~~
// 1) ��� ����,x��ǥ,y��ǥ
// 2) �����ڸ� �������ּ���!!
// 2-2) ����(0,0)  ����(0,0)  ����(10,20)  ����(11,12)
// 3) show()
#include<iostream>
#include<string>
using namespace std;
class Point {
    string color;
    int x;
    int y;
public:
    Point(int x, int y, string color = "����") {
        this->x = x;
        this->y = y;
        this->color = color;
    }
    Point(string color = "����", int x = 0, int y = 0) {
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
    Point p2 = Point("����");
    Point p3 = Point(10, 20);
    Point p4 = Point("����",11,12);
    Point p5 = Point(11, 12,"����");

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
        cout << i + 1 << "���л��� �����Է�:";
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
    cout << "1���� " << (maxIndex + 1) << "���л��Դϴ�.";
    cout << " [" << max << "��]" << endl;













    int N;
    cout << "�л���: ";
    cin >> N;

    int** stu = new int* [N];

    double max = -1.0;
    int maxIndex = -1;
    for (int i = 0; i < N; i++) {

        stu[i] = new int[2];
        cout << i + 1 << "���л��� ��������������..." << endl;

        int sum = 0;
        for (int j = 0; j < 2; j++) {
            if (j == 0) {
                cout << "�߰����: ";
            }
            else {
                cout << "�⸻���: ";
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

    cout << "1���� " << maxIndex + 1 << "���Դϴ�." << endl;










}