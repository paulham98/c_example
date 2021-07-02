#include<iostream>
#include<vector>
#include "Bitree.h"
using namespace std;

int Bst :: GetSize() {
		return size;
	}
	
void Bst :: LoadMatrix(int** matrix, int n) {
		*matrix = new int[n];
		for (int i = 0; i < n; i++) {
			printf("%p", matrix[i]);
		}
	}
	
void Bst::DFS(){
		
	}
void Bst::BFS() {

	}
void Bst::push(int n){
		Node* new_node = new Node;
		index++;
		size++;
		new_node->data = n;
		new_node->LeftChild = NULL;
		new_node->RightChild = NULL;
		if (root == NULL) {
			root = new_node;
		}
	};
void Bst::pop(){
	if (root == NULL) {
		printf("Tree is Empty!");
	}
	else {
		
	}
	};
void Bst::print(){
	Node* cur = NULL;

	};



int main() {
	int* arr = new int[5];
	arr[0] = 23;
	Bst b;
	b.push(arr[0]);
}
