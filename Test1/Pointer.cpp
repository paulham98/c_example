#include<stdio.h>
void swap(int* x, int* y) {
	int temp;
	* x = * y;
	temp = *y;
}
void main() {
	int x = 7;
	int y = 10;
	swap(&x, &y);
	printf("x= %d\ny=%y", x, y);



/* ������-> �޸𸮿� ������ ����� �ּҰ��� ����Ű�� ���� */
}