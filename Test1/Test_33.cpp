#include<stdio.h>
#define MAX 10
void f1(int* const n) {
	*n = 100;
	printf("f1()함수입니다.\n");
	printf("현재 연결된 주소: %d\n", n);
}
void f2(const int* a,int len) {//배열을 인자로 받을땐 주소값으로 한다
	for (int i = 0; i < 3; i++) {
		printf("%d", a[i]);
	}
}
void f3(const char* n) {
	n = "apple";
	printf("f3()함수입니다.\n");
	printf("현재 연결된 주소: %d\n", n);
}

void main() {
	/*
	// 변수를 선언하게되면...
	// 메모리공간+주소 +변수명
	// const: 심볼릭 상수 -> [상수화]

	int i = 10;
	const int* ip = &i; // 대상이되는 타입이 const
	// *ip = 100; xxx
	// 즉, 실수로 포인터를 통한 변수값변경을 방지

	int i2 = 20;
	ip = &i2;
	// printf("%d %d\n", i2, *ip);

	int* const ip2 = &i; // 포인터 그 자체가 const
	// ip2 = &i2; xxx
	// 포인터의 위치변경을 막아줌
	*ip2 = 11;
	printf("%d %d\n", i, *ip2);

	// 실수방지
	// 변경불가설정
	
	int v1 = 10;
	int v2 = 20;
	int* p = &v1;
	const int* p2 = &v1;
	int* const p3 = &v1;

	v1 = 30;
	*p = 40;
	//*p2 = 50;
	p2 = &v2;
	*p3 = 60;
	//p3 = &v2;

	printf("%d %d %d %d %d\n", v1, v2, *p, *p2, *p3);
	*/
	int n = 10;
	int nArr[] = { 11,12,13 };
	char nStr[] = "banana";// 문자배열 + '\0' == 문자열
	f3(nStr);
	printf("주소: %d\n", &nStr[0]);
	printf("값: %s\n", nStr);
	const char* str = "apple";

	/*
	f1(&n);
	printf("n=%d  %d\n", n, &n);
	int arr[] = { 1,2,3 };
	f2(arr, sizeof(arr)/sizeof(arr[0]));
	*/

}