#include<stdio.h>
int f(int a, int b); // �Լ����� �����Լ����� �ٸ� �Լ��� ���� �־� �����Լ����Ⱑ �����Ҷ� 
//�����Լ��� ���� ���� �ø��� ������ �̰� �����ָ� �����Ҷ� ������ �����ʰ� �Ѿ�� �ְ� �������ִ°�
int f(int num1, int num2) {
	return num1 + num2;
}
int f1() {
	int a;
	printf("Ȯ�� 1\n");
	printf("�����Է�: ");
	scanf("%d", &a);
	return a;
}
int f2(int a, int b) {
	printf("Ȯ�� 2\n");
	return a * b;
	printf("Ȯ�� 3\n");
}
int f3(int a, int b) {
	int res = 1;
	for (int i = 0; i < b; i++) {
		res *= a;
	}
	return res;
}
void main() {
	/*
	int a, b;
	printf("���� 2�� �Է�: ");
	scanf("%d%d", &a, &b);
	int sum = f(a, b);
	//input O output O
	
	int a = f1();
	int b = f1();
	printf("Ȯ�� 4\n");
	printf("%d x %d = %d\n", a, b, f2(a, b));
	printf("Ȯ�� 5\n");
	*/
	int a, b;
	printf("����2���Է�: ");
	scanf("%d%d", &a, &b);
	printf("a�� b���� %d�Դϴ�.\n", f3(a, b));
}