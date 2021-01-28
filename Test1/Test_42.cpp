#include<iostream>
#include<string>
#define MAX 3
using namespace std;
class Student {
	string name;
	int score;
	char grade;
	int num;//키값
public:
	void changeScore() {
		cout << this->name << "학생의 성적입력: ";
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
		cout << this->name << "학생 성적변경완료!" << endl;
	}

	int getNum() {
		return this->num;
	}
	string getName() {
		return this->name;
	}
	void setStudent(string name, int num, int score = -1) {
		//학생번호,이름, 성적->학점
		//성적 입력안되면 -1
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
		cout << this->name << "학생" << "[" << this->grade << "]" << endl;
	}
	
};
void main() {
	Student stu[MAX];
	int index = 0;

	int act;
	int num = 1;
	while (1) {
		cout << "===학생부 프로그램===" << endl;
		cout << "1.추가 2.삭제 3.변경 4.학생부출력 5.종료" << endl;
		cout << "입력: ";
		cin >> act;
		if (act == 1) {
			if (index == MAX) {
				cout << "더이상 추가 불가능" << endl;
				continue;
			}
			string name;
			cout << " 이름 입력:";
			cin >> name;
			cout << "시험 응시여부(1/0):";
			cin >> act;  
			if (act == 1) {
				int score;
				cout << "성적입력: ";
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
				cout << "삭제할 학생이 없습니다!" << endl;
				continue;
			}
			index--;
			cout << stu[index].getName() << "학생정보가 삭제되었습니다." << endl;
		}
		else if (act == 3) {
			if (index == 0) {
				cout << "변경할 학생이 없습니다!" << endl;
				continue;
			}
			bool check = true;
			cout << "변경할 학생의 번호 입력:";
			cin >> act;
			for (int i = 0; i < index; i++) {
				if (act == stu[i].getNum()) {
					check = false;
					stu[i].changeScore();
					break;
				}
			}
			if(check) {
				cout << "유효하지않은 정보입니다." << endl;
			}
		}
		else if (act == 4) {
			if (index == 0) {
				cout << "등록된 학생이 없습니다." << endl;

			}
			cout << "==학생부 목록=="<< endl;
			for (int i = 0; i < index; i++) {
				stu[i].show();
			}

		}
		else if (act == 5) {
			break;
		}
		else {
			cout << "다시입력!" << endl;
		}
	}
}