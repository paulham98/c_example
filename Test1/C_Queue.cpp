#include<iostream>

using namespace std;
template <typename T>
class Queue {
public:
	void Enqueue(const T&);
	void Dequeue();
	T& Front();
	boolean IsEmpty();
private:
	int capacity;
	int front = -1;
	int rear;
};
class PriorityQ {
	friend Queue;
};

int main() {


}
void Enqueue(const T&) {
};
void Dequeue();
T& Front();
boolean IsEmpty();