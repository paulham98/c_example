#include<stdio.h>
void main() {
	/*
	char c;
	printf("문자입력: ");
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
	printf("자연수는 %d번 입력되었습니다.\n", cnt);
}