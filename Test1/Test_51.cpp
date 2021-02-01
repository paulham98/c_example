#include<iostream>
#include<string>
using namespace std;
class Person {
protected:
	string name;
public:
	Person(string name) {
		this->name = name;
	}
	void hello() {
		cout << "안녕하세요!" << endl;
	}
};
class Student : public Person {
protected:
	int score;
public:
	Student(string name, int score): Person(name){
		//this->name = name;
		this->score = score;
	}
	void hello() {
		cout << "ㅎㅇㅎㅇ~" << endl;
	}
	void show() {
		cout << this->name << "학생, " << this->score << "점입니다." << endl;
	}
};
class Teacher :public Person {
public:
	Teacher(string name): Person(name) {
	}
	void start() {
		cout << "출석체크합니다~ 오늘 강의 시작합니다" << endl;
	}
};
void main() {
	Person p = Person("아무무");
	p.hello();
	Student s = Student("아리", 80);
	s.hello();
	s.show();
	Teacher t = Teacher("티모");
	t.hello();
	t.start();

}
