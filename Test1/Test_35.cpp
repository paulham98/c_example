#include<stdio.h>
void f(int a, int* b, int& c) {
	a = 10;
	*b = 20;
	c = 30;
}
void main() {
	int x = 0, y = 0, z = 0;
	f(x, &y, z);
	printf("%d %d %d\n", x, y, z);

	// 1) ������
	// 2) ������ ��� ����



	// reference
	// ����

	int num = 100;
	// int* p = &num; // pointer.��������
	// printf("%d\n", *p);

	int& ref = num; // ���۷���.��������
	printf("%d\n", ref);

	ref--;

	printf("num=%d  ref=%d\n", num, ref);


}