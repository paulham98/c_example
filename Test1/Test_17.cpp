#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main() {
	/*������ �迭 -> ������ �迭
	int STU[3][2] = { { 10,11 }, {50, 100}, { 70, 30} };
	
	printf("STU[][]ũ��:  %d\n", sizeof(STU));
	printf("STU[0]ũ��:  %d\n", sizeof(STU[0]));
	printf("STU[0][0]ũ��:  %d\n", sizeof(STU[0][0]));
	int su = sizeof(STU) / sizeof(STU[0]);
	int test = sizeof(STU[0]) / sizeof(STU[0][0]);
	for (int a = 0; a < 3; a++) {
		printf("%d�� �л��� ���� ���\n", a + 1);
		for (int i = 0; i < 2; i++) {
			printf("%d��° ���� ������ %d�Դϴ�.\n", i + 1, STU[a][i]);
		}
	}
	*/
	int ex[2][3];
	
	
	int size = sizeof(ex) / sizeof(ex[0]);
	srand(time(NULL));
	for (int i = 0; i < size; i++) {
		int sum = 0;
		for (int a = 0; a < 3; a++) {
			ex[i][a] = rand() % 101;
			printf("%d��° �л��� %d��°����:%d��\n",i+1, a+1, ex[i][a]);
			sum += ex[i][a];
		}
		double avg = sum*1.0 / 3;
		printf("%d��° �л��� �������:%.2lf��\n", i+1, avg);
	}
		
}