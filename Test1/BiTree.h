#include<iostream>
#include<vector>
using namespace std;


 class Node {
	friend class Bst;
private:
	int data;
	Node* LeftChild = NULL;
	Node* RightChild = NULL;
	Node* rear;
 public:
	 Node* SearchNode(Node* tree, int target) {
		 if (tree == NULL)
			 return NULL;
		 if (tree->data == target)
			 return tree;
		 else if (tree->data > target)
			 return SearchNode(tree->LeftChild, target);
		 else if (tree->data < target)
			 return SearchNode(tree->RightChild, target);

		 
	 }
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
	void index();
	};
