#include<stdio.h>
void main() {
	/*int menu;
	do {
		printf("===메뉴판===\n");
		printf("1.떡볶이\n");
		printf("2.순대\n");
		printf("3.튀김\n");
		printf("입력: ");
	} while (menu < 1 || 3 < menu);
	//일단 처리 -> 조건문 확인
	//do-whil문 == 선처리후조건
	*/

	int sum=0;
	int cnt=0;
	while (1) {
		int a;
		printf("정수입력:");
		scanf("%d", &a);
		if (a == 0) {
			break;
		}
		if (a % 2 == 0) {
			if (a < 0) {
				 a*= (-1);
			}
		 sum += a;
		}
		else if (a % 2 == 1) {
			cnt++;
		}
	}
	printf("짝수 총합은%d이고, 홀수의 개수는 %d개입니다.", sum, cnt);
	/*
	int i;
	for (i = 0; i < 3; i++) {
		// 초기식 ; 조건식 ; 증감식
		printf("안녕하세요!\n");
	}
	printf("i=%d\n", i);
	*/

		for (int i = 1; i <= 10; i++) {
			printf("%d ", i);
		}
	printf("\n");

	for (char c = 'a'; c <= 'z'; c++) {
		printf("%c ", c);
	}
	printf("\n");
}