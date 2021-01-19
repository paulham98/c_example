#include<stdio.h>
void main() {
	int a = 10;
	int b;
	b = a++;//후위증감연산자 -> 우선순위가 굉장이 낮음 a먼저 들어가고 다음에 더해짐 
	printf("a=%d b=%d\n", a, b);
									// a++		++a
	b = ++a;
	printf("a=%d b=%d\n", a, b);
}