#include<iostream>
using namespace std;
#define MAX 200;

template <class T>class TreeNode{
private:
    int key;
    T data;
    T* Leftchild;
    T* Rightchild;
public:
    int getKey();
    void setKey(int key);
    T getData();
};
template <class T>class MaxHeap{
private:
    TreeNode<T> node[MAX];
    int size;
public:
    
};

int main(){

}

