#include<iostream>
#include<string>
using namespace std;
class C { // CŬ����: ���̽�Ŭ����,�θ�Ŭ����
private: // Ŭ������ �⺻����.��⼺.�ڱ��ڽŸ� ���ٰ�����
    int x;
protected: // �ڱ��ڽŰ� �ڽ��� ��ӹ��� �ڽ�Ŭ���������� �����Ҽ�����
    int y;
public:
    int z;
    void f1() {
        cout << "CŬ����" << endl;
    }
};
class D :protected C { // DŬ����: �Ļ�Ŭ����,�ڽ�Ŭ����
   // �ش� ������������ �� ���� �Ӽ�������,
   // �ش� ���������� ��ӹްڴ�!
public:
    void f2() {
        cout << "DŬ����" << endl;
    }
};
void main() {

    C c1 = C();
    D d1 = D();




}