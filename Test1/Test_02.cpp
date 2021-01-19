#include<stdio.h>
#define SU 30 //기호상수, 사용자 정의 상수 코딩을 하다가 
void main() {
	const double PI = 3.14;

	//연산자 
	int a = 10;
	int b = 3;
	printf("a+b=%d", a + b);
	printf("a-b=%d", a - b);
	printf("a*b=%d", a * b);
	printf("a/b=%d", a / b);// 정수-정수->정수 정수-실수->실수 
	printf("a%b=%d", a % b);

	//복합대입연산자
	a = 10;
	printf("전:$d\n", a);
	a += 100;
	printf("후 :$d\n", a);
}