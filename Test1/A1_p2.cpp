#include<iostream>

int main() {
	//malloc�� �����ϴ� �޸� ���� �Ҵ� ��� new/ delete
	int* ptr1 = new int;
	int* arr1 = new int[3];
	//(int *) malloc(sizeof(int))
	delete ptr1;
	delete []arr1;
}