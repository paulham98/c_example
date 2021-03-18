#include<iostream>

int main() {
	//malloc을 대항하는 메모리 동적 할당 방법 new/ delete
	int* ptr1 = new int;
	int* arr1 = new int[3];
	//(int *) malloc(sizeof(int))
	delete ptr1;
	delete []arr1;
}