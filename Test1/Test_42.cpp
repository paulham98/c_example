#include<iostream>
#include<string>
#define MAX 3
using namespace std;
class Student {
	string name;
	int score;
	char grade;
	int num;//Ű��
public:
	void changeScore() {
		cout << this->name << "�л��� �����Է�: ";
		cin >> this->score;
		if (this->score <= 60) {
			this->grade = 'C';
		}
		else if (this->score <= 80) {
			this->grade = 'B';
		}
		else {
			this->grade = 'A';
		}
		cout << this->name << "�л� ��������Ϸ�!" << endl;
	}

	int getNum() {
		return this->num;
	}
	string getName() {
		return this->name;
	}
	void setStudent(string name, int num, int score = -1) {
		//�л���ȣ,�̸�, ����->����
		//���� �Է¾ȵǸ� -1
		this->num = num;
		this->name = name;
		this->score = score;
		if (this->score == -1) {
			this->grade = 'F';
		}
		if (this->score <= 60) {
			this->grade = 'C';
		}else if (this->grade <= 80) {
			this->grade = 'B';
		}
		else if (this->grade <= 100) {
			this->grade = 'A';
		}
	}
	void show() {
		cout << this->name << "�л�" << "[" << this->grade << "]" << endl;
	}
	
};
void main() {
	Student stu[MAX];
	int index = 0;

	int act;
	int num = 1;
	while (1) {
		cout << "===�л��� ���α׷�===" << endl;
		cout << "1.�߰� 2.���� 3.���� 4.�л������ 5.����" << endl;
		cout << "�Է�: ";
		cin >> act;
		if (act == 1) {
			if (index == MAX) {
				cout << "���̻� �߰� �Ұ���" << endl;
				continue;
			}
			string name;
			cout << " �̸� �Է�:";
			cin >> name;
			cout << "���� ���ÿ���(1/0):";
			cin >> act;  
			if (act == 1) {
				int score;
				cout << "�����Է�: ";
				cin >> score;
				stu[index].setStudent(name, num, score);
			}
			else {
				stu[index].setStudent(name, num);
			}
			index++;
			num++;
		}
		else if (act == 2) {
			if (index == 0) {
				cout << "������ �л��� �����ϴ�!" << endl;
				continue;
			}
			index--;
			cout << stu[index].getName() << "�л������� �����Ǿ����ϴ�." << endl;
		}
		else if (act == 3) {
			if (index == 0) {
				cout << "������ �л��� �����ϴ�!" << endl;
				continue;
			}
			bool check = true;
			cout << "������ �л��� ��ȣ �Է�:";
			cin >> act;
			for (int i = 0; i < index; i++) {
				if (act == stu[i].getNum()) {
					check = false;
					stu[i].changeScore();
					break;
				}
			}
			if(check) {
				cout << "��ȿ�������� �����Դϴ�." << endl;
			}
		}
		else if (act == 4) {
			if (index == 0) {
				cout << "��ϵ� �л��� �����ϴ�." << endl;

			}
			cout << "==�л��� ���=="<< endl;
			for (int i = 0; i < index; i++) {
				stu[i].show();
			}

		}
		else if (act == 5) {
			break;
		}
		else {
			cout << "�ٽ��Է�!" << endl;
		}
	}
}