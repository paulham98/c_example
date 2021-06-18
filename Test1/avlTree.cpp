#include<iostream>
#include<vector>
using namespace std;
template<class T> class Node {
private:
	T data;
	Node<T>* LeftChild;
	Node<T>* RightChild;
};
class Bst {
private:
	int* node;
	int element;
	int size;
	int n;
public:
	int GetSize() {
		return size;
	}
	void LoadMatrix();
	void PrintDFS();
	void PrintBFS();

};


int main(){
}