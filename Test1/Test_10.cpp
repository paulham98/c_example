#include<stdio.h>
void main() {
	/*
	char c;
	printf("�����Է�: ");
	scanf(" %c", &c);
	if ('a' <= c && c <= 'z') {
		//a->A b->B = 97 ->65 98->66
		c -= 32;
	}
	char al = 'A';
	while (al <= c) {
		printf("%c", al);
		al++;
	}
	*/
	int cnt = 0;
	while(1) {
		int a;
		scanf("%d", &a);
		if(a==0){
			break;
		}
		else if(a < 0) {
			continue;
		}
		cnt++;
	}
	printf("�ڿ����� %d�� �ԷµǾ����ϴ�.\n", cnt);
}