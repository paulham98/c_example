#include<stdio.h>
#include<stdlib.h>
double sumArr(double* arr, int len) {
	double sum = 0.0;
	for (int i = 0; i < len; i++) {
		sum += arr[i];
	}
	printf("������ %.2lf�Դϴ�.\n", sum);
	return sum;
}
void main() {
	int n;
	scanf("%d", &n);
	double* arr = (double*)malloc(n * sizeof(double));//�迭 �����޸��Ҵ�
	//arr �ּҿ� �ٷο��� ��� �޸��Ҵ����ִ°� �迭ó��
	for (int i = 0; i < n; i++) {
		printf("%d��°", i + 1);
		scanf("%lf", &arr[i]);
	}
	printf("main(): ������ %.2lf�Դϴ�.\n", sumArr(arr, n));
	free(arr);//free �Լ��� �������� �Ҵ��� �޸𸮸� �����ϴ� �Լ�
}
