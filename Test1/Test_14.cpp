#include<stdio.h>
#define Max 5;
void main() {
// c���� �迭�� static�̾ �迭�� ũ�⸦ ���� ����������� 
// ���� ������ �ȵǰ� ��ó������ ó������ ������ ���� 
	int stu[3];
	// ũ�� ������
	/*
	int i = 10;
	double d = 3.14;
	int size = sizeof(stu) / sizeof(stu[0]); // ����� ����==ũ��==����

	printf("i�� ũ��=%d  d�� ũ��=%d\n", sizeof(i), sizeof(d));
	printf("stu[]�迭�� ũ��=%d  stu[0]����� ũ��=%d\n", sizeof(stu), sizeof(stu[0]));


	for (int i = 0; i < 3; i++) {
		printf("%d�� �л��� �����Է�:", i + 1);
		scanf("%d", &stu[i]);
	}
	printf("\n");
	for (int i = 0; i < 3; i++) {
		printf("%d�� �л��� ������ %d���Դϴ�.\n", i + 1, stu[i]);
	}
	

	//ex1
	int student[3];
	int sum = 0;
	
	for (int i = 0; i < 3; i++) {
		printf("%d�� �л��� �����Է�:", i + 1);
		scanf("%d", &student[i]);
		sum += student[i];
	}
	double avg = sum / 3;
	printf("%d\n%.2lf", sum, avg);
	*/
	int data[10];
	for (int i = 0; i < 10; i++) {
		printf("%d��° �Է�:", i + 1);
		scanf("%d", &data[i]);
	}
	int cnt = 0;
	for (int i = 0; i < 10; i++) {
		if (data[i] < 0) {
			cnt++;
		}
	}
	printf("\n������ �� %d�� �ԷµǾ����ϴ�.\n", cnt);

}
