#include<iostream>
#include<vector>
using namespace std;
template<class T> class Node {
private:
	T data;
	Node<T>* LeftChild;
	Node<T>* RightChild;
};
// 노드를 하나씩 만들고..
// 이진트리를 만드는 헤더파일이 필요할거 같은데
class Bst {
private:
	int* node;
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
			pritnf("%d", matrix[i]);
		}
	}
	void PrintDFS();
	void PrintBFS();

};


int main(){
}