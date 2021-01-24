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



/* 포인터-> 메모리에 변수가 저장된 주소값을 가르키는 변수 */
}