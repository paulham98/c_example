#include<stdio.h>
double abs(double d);
int sum(int i);//정수를 받아서 1부터 정수까지의 합을 구하는 함수
void main() {
	int a = 0;
	double d = 3.14;
	//확인 
	double d = -3.14;
	printf("%d = '%lf\n", abs(d));// %f-> float %lf-> double  
	scanf("%d", &a);
	printf("확인 sum은 %d", sum(a));
}
double abs(double d) {
	if (d < 0) {
		d *= (-1);
	}
}
int sum(int i) {//정수를 받아서 1부터 정수까지의 합을 구하는 함수
	int a = 1;
	int p = 0;
	while (a <= i) {
		p += a;
		a++;
	}
	return p;
}