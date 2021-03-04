#include<stdio.h>

void main() {
	char a[30];
	scanf("%s", a);
	for (int i = 0; a[i] != '\0'; i++) {
		printf("\'%c\'", a[i]);
	}
}