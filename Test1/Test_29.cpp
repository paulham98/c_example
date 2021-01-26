#include<stdio.h>
#include<stdlib.h>
double sumArr(double* arr, int len) {
	double sum = 0.0;
	for (int i = 0; i < len; i++) {
		sum += arr[i];
	}
	printf("총합은 %.2lf입니다.\n", sum);
	return sum;
}
void main() {
	int n;
	scanf("%d", &n);
	double* arr = (double*)malloc(n * sizeof(double));//배열 동적메모리할당
	//arr 주소에 바로옆에 계속 메모리할당해주는것 배열처럼
	for (int i = 0; i < n; i++) {
		printf("%d번째", i + 1);
		scanf("%lf", &arr[i]);
	}
	printf("main(): 총합은 %.2lf입니다.\n", sumArr(arr, n));
	free(arr);//free 함수는 동적으로 할당한 메모리를 해제하는 함수
}
