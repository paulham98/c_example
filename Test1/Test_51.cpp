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
		cout << "�ȳ��ϼ���!" << endl;
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
		cout << "��������~" << endl;
	}
	void show() {
		cout << this->name << "�л�, " << this->score << "���Դϴ�." << endl;
	}
};
class Teacher :public Person {
public:
	Teacher(string name): Person(name) {
	}
	void start() {
		cout << "�⼮üũ�մϴ�~ ���� ���� �����մϴ�" << endl;
	}
};
void main() {
	Person p = Person("�ƹ���");
	p.hello();
	Student s = Student("�Ƹ�", 80);
	s.hello();
	s.show();
	Teacher t = Teacher("Ƽ��");
	t.hello();
	t.start();

}
