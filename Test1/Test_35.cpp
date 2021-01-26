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

	// 1) 가독성
	// 2) 연산자 사용 용이



	// reference
	// 별명

	int num = 100;
	// int* p = &num; // pointer.간접참조
	// printf("%d\n", *p);

	int& ref = num; // 레퍼런스.직접참조
	printf("%d\n", ref);

	ref--;

	printf("num=%d  ref=%d\n", num, ref);


}