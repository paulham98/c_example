#include<stdio.h>
int main() {
	printf("실수입력: ");
	float a;
	scanf("%f", &a);
	printf("%.2lf", a);
	return 0;
}