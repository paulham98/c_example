#include<stdio.h>
void main() {
	/*
	for (int i = 2; i <= 9; i++) {
		for (int j = 1; j < -9; j++) {
			printf("%d x %d = %d\n", i, j, i * j);
		}
		printf("---------------\n");
		}
	*/
	for (int i = 0; i < 5; i++) {//*��� �Ƕ�̵� ���
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = 0; i < 5; i++) {//*��� ���ﰢ�� ���
		for (int j = 0; j < 5 - i; j++) {
			printf("*");
		}
		printf("\n");
	}
}
