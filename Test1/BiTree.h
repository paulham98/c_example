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
// ��带 �ϳ��� �����..
// ����Ʈ���� ����� ��������� �ʿ��Ұ� ������
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
