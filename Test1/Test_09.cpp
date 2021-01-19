#include<stdio.h>
void main() {
	int a, b;
	scanf("%d\n%d", &a, &b);
	while (a <= b) {
		printf("%d", a);
		a++;
	}
	if (a > b) {
		int tmp = a;
		a = b;
		b = tmp;
	}
	int num = a;
	int sum = 0; // 초기화
	while (num <= b) {
		sum += num; // sum=sum+num;
		num++;
	}
	printf("%d부터 %d까지의 합은 %d입니다.\n", a, b, sum);
	int cnt = b - a + 1;
	double avg = sum * 1.0 / cnt;
	printf("평균은 %.2lf입니다.\n", avg);

}