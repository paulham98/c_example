#include<stdio.h>
void swap(int* a, int* b) {
	//포인터 : 주소를 받는 자료형
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
void main() {
	int a = 10, b = 20;
	swap(&a, & b);
	printf("a=%d b=%d\n", a, b);


	printf("재료의 가짓수 배열");//c에서 배열은 정적이라 입력된 값을 쓸수 없음 조건에 10가지가 최대니까 10으로 지정
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
/* 문제
*  1. 배열의 크기를 입력받고
*  2. 배열에 크기만큼 재료의 여분을 입력 
*  3. 만드는데 필요한 재료마다의 개수 입력
*  4. 필요한 개수에 여분을 나눠서 몫이 0이되면 만들수 없는거
*  5. 나눈 몫이 제일 작은 값이 만들수 있는 최대값이 됨 
*/