#include<iostream>
#include<string>
#include<time.h>
using namespace std;
class Pokemon {
protected:
	string name;
	int level;
	string type;
	bool game() {
		srand(time(NULL));
		if (rand() % 2) {
			cout << "���ݼ���! ";
			this->level++;
			return true;
		}
		else {
			cout << "���ݽ���..." << endl;
			return false;
		}
	}
public:
	Pokemon(string name, int level, string type) {
		this->name = name;
		this->level = level;
		this->type = type;
	}
	void attack() {
		if (game()) {
			cout << "���ݰ���" << endl;
		}
	}
	void speak() {
		cout << "�����Ҹ�" << endl;
	}
};
class Electric : public Pokemon {
public:
	Electric(string name, int level) : Pokemon(name, level, "����"){
	}
	void attack() {
		if (game()) {
			cout << "�鸸��Ʈ!!!" << endl;
		}
	}
};
class Water : public Pokemon {
public:
	Water(string name, int level) : Pokemon(name, level, "��") {
	}
	void attack() {
		if (game()) {
			cout << "������!!!" << endl;
		}
	}
};
class Pikachu : public Electric {
public:
	Pikachu(int level = 5) : Electric("��ī��", level) {

	}
	void show() {
		cout << name << ", " << level << ", " << type << endl;
	}
	void speak() {
		cout << "��ī��ī" << endl;
	}
}; class Squr : public Water {
public:
	Squr(int level = 5 ) : Water("���α�", level) {
		
	}
	void show() {
		cout << name << ", " << level << ", " << type << endl;
	}
	void speak() {
		cout << "�ľ�~" << endl;
	}
};
void main() {
	Pikachu p = Pikachu();
	Squr s = Squr();
	p.attack();
	p.attack();
	p.attack();
	p.speak();
	p.show();
	s.attack();
	s.attack();
	s.attack();
	s.attack();
	s.show();
}