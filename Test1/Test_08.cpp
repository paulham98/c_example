#include<stdio.h>
void main() {
	int a, b;
	scanf("%d%d", &a, &b);
	printf("중간고사:%d\n기말고사:%d", a, b);
	printf("평균점수:%d\n", (a + b) / 2);
	int avg = (a + b) / 2;
	if (avg < 60) {printf("F");
	}else if(avg <80){ printf("C"); }
	else if(avg <90){ printf("B"); }
	else if(avg <100){ printf("A"); }
}