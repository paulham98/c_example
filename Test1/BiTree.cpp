#include<iostream>
#include<vector>
using namespace std;
template <class T>class Bst;

template<class T> class Node {
	friend class Bst<T>;
private:
	T data;
	T index;
	Node<T>* LeftChild;
	Node<T>* RightChild;
};
// ��带 �ϳ��� �����..
// ����Ʈ���� ����� ��������� �ʿ��Ұ� ������

template <class T>class Bst{
private:
	int element;
	int size;
	int n;
	int** matrix;
public:
	int GetSize() {
		return size;
	}
	void LoadMatrix(int** matrix, int n) {
		*matrix = new int[n];
		for (int i = 0; i < n; i++) {
			printf("%d", matrix[i]);
		}
	}
	void PrintDFS();
	void PrintBFS();
	void push(int n){
		Node<T>* new_node = new Node<T>;
		++index;
		size++;
		new_data->data = n;
		new_node->LeftChild = NULL;
		new_node->RightChild = NULL;
	};
	void pop(){

	};
	void print(){
		for(int i = 0; i < n; i++){
			if(T* leftChild)
		}
	};

};


int main(){
	
	int* matrix;
	int d;
	scanf("%d", &d);
	
}