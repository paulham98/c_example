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
	int sum = 0; // �ʱ�ȭ
	while (num <= b) {
		sum += num; // sum=sum+num;
		num++;
	}
	printf("%d���� %d������ ���� %d�Դϴ�.\n", a, b, sum);
	int cnt = b - a + 1;
	double avg = sum * 1.0 / cnt;
	printf("����� %.2lf�Դϴ�.\n", avg);

}