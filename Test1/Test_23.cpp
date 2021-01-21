#include<stdio.h>
int f(int a, int b); // 함수원형 메인함수말고 다른 함수가 많이 있어 메인함수보기가 불편할때 
//메인함수를 제일 위로 올리고 그위에 이걸 적어주면 빌드할때 에러가 나지않고 넘어갈수 있게 예고해주는것
int f(int num1, int num2) {
	return num1 + num2;
}
int f1() {
	int a;
	printf("확인 1\n");
	printf("정수입력: ");
	scanf("%d", &a);
	return a;
}
int f2(int a, int b) {
	printf("확인 2\n");
	return a * b;
	printf("확인 3\n");
}
int f3(int a, int b) {
	int res = 1;
	for (int i = 0; i < b; i++) {
		res *= a;
	}
	return res;
}
void main() {
	/*
	int a, b;
	printf("정수 2개 입력: ");
	scanf("%d%d", &a, &b);
	int sum = f(a, b);
	//input O output O
	
	int a = f1();
	int b = f1();
	printf("확인 4\n");
	printf("%d x %d = %d\n", a, b, f2(a, b));
	printf("확인 5\n");
	*/
	int a, b;
	printf("정수2개입력: ");
	scanf("%d%d", &a, &b);
	printf("a의 b승은 %d입니다.\n", f3(a, b));
}