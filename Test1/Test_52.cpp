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
			cout << "공격성공! ";
			this->level++;
			return true;
		}
		else {
			cout << "공격실패..." << endl;
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
			cout << "공격가능" << endl;
		}
	}
	void speak() {
		cout << "울음소리" << endl;
	}
};
class Electric : public Pokemon {
public:
	Electric(string name, int level) : Pokemon(name, level, "전기"){
	}
	void attack() {
		if (game()) {
			cout << "백만볼트!!!" << endl;
		}
	}
};
class Water : public Pokemon {
public:
	Water(string name, int level) : Pokemon(name, level, "물") {
	}
	void attack() {
		if (game()) {
			cout << "물대포!!!" << endl;
		}
	}
};
class Pikachu : public Electric {
public:
	Pikachu(int level = 5) : Electric("피카츄", level) {

	}
	void show() {
		cout << name << ", " << level << ", " << type << endl;
	}
	void speak() {
		cout << "피카피카" << endl;
	}
}; class Squr : public Water {
public:
	Squr(int level = 5 ) : Water("꼬부기", level) {
		
	}
	void show() {
		cout << name << ", " << level << ", " << type << endl;
	}
	void speak() {
		cout << "파아~" << endl;
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