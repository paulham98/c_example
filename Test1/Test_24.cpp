#include<stdio.h>
double abs(double d);
int sum(int i);//������ �޾Ƽ� 1���� ���������� ���� ���ϴ� �Լ�
void main() {
	int a = 0;
	double d = 3.14;
	//Ȯ�� 
	double d = -3.14;
	printf("%d = '%lf\n", abs(d));// %f-> float %lf-> double  
	scanf("%d", &a);
	printf("Ȯ�� sum�� %d", sum(a));
}
double abs(double d) {
	if (d < 0) {
		d *= (-1);
	}
}
int sum(int i) {//������ �޾Ƽ� 1���� ���������� ���� ���ϴ� �Լ�
	int a = 1;
	int p = 0;
	while (a <= i) {
		p += a;
		a++;
	}
	return p;
}