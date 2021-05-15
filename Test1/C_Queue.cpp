#include<iostream>
using namespace std;

template <class T>class Queue;

template <class T>class Node{
	friend class Queue<T>;
private:
	T data;
	Node<T>* next;
	Node<T>* prev;
};

template <class T>class Queue {
private:
	Node<T>* front;
	Node<T>* rear;
	int size = 0;
public:
	void Enqueue(T data){
		Node<T>* new_node = new Node<T>;
		size++;
		new_node->data = data;
		new_node->next = NULL;
		new_node->prev = NULL;
		if(front == NULL){
			front = new_node;
			rear = new_node;
		}else {
			new_node->next = front;
			front->prev = new_node;
			front = new_node;
		}
	};
	void Dequeue(){
		if(front == NULL){
			printf("Queue is Empty!");
		}else{
		cout << rear->data << endl;
		rear = rear->prev;
		rear->next = NULL;
		}
	};
	void Front(){
		cout << front->data << endl;
	};
	void Length(){
		return size;
	}
	void Print(){
		Node<T> *cur = NULL;
		for(cur = front; cur != NULL; cur = cur->next){
			cout << cur->data << " ";
		}
		printf("\n");
	}
};


int main() {
	Queue<int> q;
	int number;
	q.Enqueue(1);
	q.Enqueue(2);
	q.Enqueue(3);
	q.Enqueue(4);
	q.Print();
	q.Dequeue();
	q.Print();


}