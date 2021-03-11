#include<stdio.h>
int main() {
	int a, b, c;
	int d = 0;
	scanf("%d %d %d", &a, &b, &c);
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a; j++) {
			for (int k = 0; k < a; k++) {
				printf("%d %d %d\n", i, j, k);
				d++;
			}
		}
	}
	printf("%d", d);
}
