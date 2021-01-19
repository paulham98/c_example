#include<stdio.h>
void main() {
	/*[제어문]
		조건문:양자택일, 분기점
		반복문:반목, 무한번,N번, a회, 득정조건을 만족할때까지 계속 
	*/

	//if 문
	int n;
	scanf("%d", &n);
	if (n % 2 == 1) {
		printf("홀수입니다!\n");
	}else {
		printf("짝수입니다!\n");
	}
	int a, b;
	scanf("%d%d", &a, &b);
	if (a > b) {
		printf("a가 b보다 크다.");
	}else if (a < b) {
		printf("b가 a보다 크다.");
	}
	else {
		printf("a와 b가 같다.");
	}


	int month;
	printf("몇월? ");
	scanf("%d", &month);

	if (month < 1 || 12 < month) {
		// 유효성 검사
		printf("잘못입력하셨습니다!\n");
	}
	else if (3 <= month && month <= 5) {
		printf("봄\n");
	}
	else if (6 <= month && month <= 8) {
		printf("여름\n");
	}
	else if (9 <= month && month <= 11) {
		printf("가을\n");
	}
	else {
		printf("겨울\n");
	}
}