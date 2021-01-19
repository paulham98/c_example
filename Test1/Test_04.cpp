#include<stdio.h>
void main() {
	/*int a, b, c;
	int sum = 0;
	printf("정수 입력: ");
	scanf("%d", &a);
	printf("정수 입력: ");
	scanf("%d", &b);
	printf("정수 입력: ");
	scanf("%d", &c);
	sum += a;
	sum += b;
	sum += c;
	double avg = sum / 3.0; 
	printf("총합:%d", sum);
	printf("평균:%2lf", avg);
	


	int a = 10;
	int b = ++a;
	int c = a++;
	int d = b++ + ++c;

	 printf("a=%d b=%d c=%d d=%d\n", a, b, c, d);
	*/
	//삼항 연산자
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	

	int min = a < b ? a : b;
	min = min < c ? min : c;
	printf("가장 작은 정수는 %d입니다.\n", min);
	
	
}