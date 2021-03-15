#include<stdio.h>//STandInOut.Headerfile 전처리기어
int sum(int a,int b);
int main() {
	/*
	//printf("안녕하세요!\n");
	//printf("다음주 까지 잘부탁드립니다~^^\n\n");
	
	//int sum = a + b;
	//printf("a+b= %d %d입니다.\n\n", sum,5);
	// %->형식지정자

	//double d = 3.1415926;
	//char c = 'A';
	//printf("%lf  %c\n", d, c);

	//입력 받는법
	//int num;
	//printf("정수입력 :");
	scanf("%d", &num); // &-> 주소연산자
	//scanf_s -> 쓰면 안되는 이유
	//입력함수를 작성 후에 빌드할때 에러발생
	//1. 프로젝트 속성 전처리기 정의 _
	//2. 프로젝트 속성 일반 
	*/
	int a = 10;
	int b = 20;
	sum(a, b);

}
//data type
//int 정수%d , double 실수%lf, char 문자%c
int sum(int a, int b) {
	int sum = a + b;
	printf("%d", sum);
	return 0;
}