/*
* while -> for �ٲ㺸��
* 1) ���� 2�� �Է�
* :2 6 -> 23456 
* :8 5
* : 5 6 7 8
* 2) ���� 1�� �Է� 
* :3 
* 1+2+3=6
*/
#include<stdio.h>
void main() {
	/*
	if (a > b) {
		int tmp = a;
		a = b;
		b = tmp;
	}
	while (a <= b) {
		printf("%d", a);
		a++;
	}
	for (int i = a; i <= b; a++) {
			printf("%d", a);
	}
	*/
	int a;
	int i = 1;
	int sum = 0;
	scanf("%d", &a);
	/*while (i <= a) {
		sum += i;
		i++;
	}*/
	for (i = 1; i <= a; i++) {
		sum += i;
	}
	printf("%d", sum);
}