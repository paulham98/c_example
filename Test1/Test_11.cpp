#include<stdio.h>
void main() {
	/*int menu;
	do {
		printf("===�޴���===\n");
		printf("1.������\n");
		printf("2.����\n");
		printf("3.Ƣ��\n");
		printf("�Է�: ");
	} while (menu < 1 || 3 < menu);
	//�ϴ� ó�� -> ���ǹ� Ȯ��
	//do-whil�� == ��ó��������
	*/

	int sum=0;
	int cnt=0;
	while (1) {
		int a;
		printf("�����Է�:");
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
	printf("¦�� ������%d�̰�, Ȧ���� ������ %d���Դϴ�.", sum, cnt);
	/*
	int i;
	for (i = 0; i < 3; i++) {
		// �ʱ�� ; ���ǽ� ; ������
		printf("�ȳ��ϼ���!\n");
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