#include<iostream>
#include<vector>
using namespace std;


 class Node {
	friend class Bst;
private:
	int data;
	int* LeftChild;
	int* RightChild;
	Node* rear;
};
// 노드를 하나씩 만들고..
// 이진트리를 만드는 헤더파일이 필요할거 같은데
class Bst {
private:
	int element;
	int size;
	int index;
	int n;
	int** matrix;
	Node* root;
	
	
public:
	int GetSize();
	void LoadMatrix(int** matrix, int n);
	void DFS();
	void BFS();
	void push(int n);
	void pop();
	void print();
	};
