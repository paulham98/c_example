#include<stdio.h>
void main() {
	int a = 10;
	int b;
	b = a++;//�������������� -> �켱������ ������ ���� a���� ���� ������ ������ 
	printf("a=%d b=%d\n", a, b);
									// a++		++a
	b = ++a;
	printf("a=%d b=%d\n", a, b);
}