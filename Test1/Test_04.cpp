#include<stdio.h>
void main() {
	/*int a, b, c;
	int sum = 0;
	printf("���� �Է�: ");
	scanf("%d", &a);
	printf("���� �Է�: ");
	scanf("%d", &b);
	printf("���� �Է�: ");
	scanf("%d", &c);
	sum += a;
	sum += b;
	sum += c;
	double avg = sum / 3.0; 
	printf("����:%d", sum);
	printf("���:%2lf", avg);
	


	int a = 10;
	int b = ++a;
	int c = a++;
	int d = b++ + ++c;

	 printf("a=%d b=%d c=%d d=%d\n", a, b, c, d);
	*/
	//���� ������
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	

	int min = a < b ? a : b;
	min = min < c ? min : c;
	printf("���� ���� ������ %d�Դϴ�.\n", min);
	
	
}