#include<stdio.h>
void main() {
	/*[���]
		���ǹ�:��������, �б���
		�ݺ���:�ݸ�, ���ѹ�,N��, aȸ, ���������� �����Ҷ����� ��� 
	*/

	//if ��
	int n;
	scanf("%d", &n);
	if (n % 2 == 1) {
		printf("Ȧ���Դϴ�!\n");
	}else {
		printf("¦���Դϴ�!\n");
	}
	int a, b;
	scanf("%d%d", &a, &b);
	if (a > b) {
		printf("a�� b���� ũ��.");
	}else if (a < b) {
		printf("b�� a���� ũ��.");
	}
	else {
		printf("a�� b�� ����.");
	}


	int month;
	printf("���? ");
	scanf("%d", &month);

	if (month < 1 || 12 < month) {
		// ��ȿ�� �˻�
		printf("�߸��Է��ϼ̽��ϴ�!\n");
	}
	else if (3 <= month && month <= 5) {
		printf("��\n");
	}
	else if (6 <= month && month <= 8) {
		printf("����\n");
	}
	else if (9 <= month && month <= 11) {
		printf("����\n");
	}
	else {
		printf("�ܿ�\n");
	}
}