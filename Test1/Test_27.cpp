#include<stdio.h>
void swap(int* a, int* b) {
	//������ : �ּҸ� �޴� �ڷ���
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
void main() {
	int a = 10, b = 20;
	swap(&a, & b);
	printf("a=%d b=%d\n", a, b);


	printf("����� ������ �迭");//c���� �迭�� �����̶� �Էµ� ���� ���� ���� ���ǿ� 10������ �ִ�ϱ� 10���� ����
	int num;
	scanf("%d", &num);
	int data1[10]; //1
	int data2[10];
	for (int i = 0; i < num; i++) {//2
		scanf("%d", &data1[i]);
	}
	for (int i = 0; i < num; i++) {//2
		scanf("%d", &data2[i]);
	}
	for (int i = 0; i < num; i++) {
		data1[i] /= data2[i];
	}
	int min = data1[0];
	for (int i = 1; i < num; i++) {
		if (min > data1[i]) {
			min = data1[i];
		}
	}
	printf("\n\n%d\n", min);
}
/* ����
*  1. �迭�� ũ�⸦ �Է¹ް�
*  2. �迭�� ũ�⸸ŭ ����� ������ �Է� 
*  3. ����µ� �ʿ��� ��Ḷ���� ���� �Է�
*  4. �ʿ��� ������ ������ ������ ���� 0�̵Ǹ� ����� ���°�
*  5. ���� ���� ���� ���� ���� ����� �ִ� �ִ밪�� �� 
*/