#include<stdio.h>
void main() {
	int a, b;
	scanf("%d%d", &a, &b);
	printf("�߰����:%d\n�⸻���:%d", a, b);
	printf("�������:%d\n", (a + b) / 2);
	int avg = (a + b) / 2;
	if (avg < 60) {printf("F");
	}else if(avg <80){ printf("C"); }
	else if(avg <90){ printf("B"); }
	else if(avg <100){ printf("A"); }
}