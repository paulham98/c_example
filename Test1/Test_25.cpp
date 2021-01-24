#include<stdio.h>
int abs(int x);
void main() {
	int num ;
	scanf("%d",&num);
	printf("=> %d\n", abs(num));
}
int abs(int x) {
	if (x < 0) {
		x *= (-1);
	}
	return x;
}
