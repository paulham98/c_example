#include<iostream>
#include<vector>
using namespace std;
class Bst;
template<typename T>

 class Node {
	friend class Bst;
private:
	T data;
	T index;
	Node<T>* LeftChild;
	Node<T>* RightChild;
};
// 노드를 하나씩 만들고..
// 이진트리를 만드는 헤더파일이 필요할거 같은데
class Bst {
	
private:
	int element;
	int size;
	int n;
	int** matrix;
public:
	int GetSize() {
		return size;
	}
	
	void LoadMatrix(int** matrix, int n);
	void DFS();
	void BFS();
	void push(int n);
	void pop();
	void print();
	};
