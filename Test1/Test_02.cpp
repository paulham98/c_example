#include<stdio.h>
#define SU 30 //��ȣ���, ����� ���� ��� �ڵ��� �ϴٰ� 
void main() {
	const double PI = 3.14;

	//������ 
	int a = 10;
	int b = 3;
	printf("a+b=%d", a + b);
	printf("a-b=%d", a - b);
	printf("a*b=%d", a * b);
	printf("a/b=%d", a / b);// ����-����->���� ����-�Ǽ�->�Ǽ� 
	printf("a%b=%d", a % b);

	//���մ��Կ�����
	a = 10;
	printf("��:$d\n", a);
	a += 100;
	printf("�� :$d\n", a);
}