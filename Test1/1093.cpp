#include<stdio.h>

int main() {
	int n[30] = { 0, };
	int a, b, c;
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		scanf("%d", &b);
		a[&b] += 1;
	}
	for (int i = 1; i < 30; i++) {
		printf("%d", a[&i]);
	}
}