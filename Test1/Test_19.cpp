#include<stdio.h>
#include<string.h>
void main() {
	char str[10];
	printf("���ڿ��Է�: ");
	scanf("%s", str);
	printf("%d", strlen(str));
	for (int i = 0; i < strlen(str); i++) {
		if ('A' <= str[i] && str[i] <= 'Z') {
			str[i] += 32;
		}
	}
	printf("�ٲ� ���ڿ�: %s\n", str);

	
	for (char c = 'a'; c <= 'z'; c++) {
		int cnt = 0;
		for (int i = 0; i < strlen(str); i++) {
			if (str[i] == c) {
				cnt++;
			}
		}
		if (cnt == 0) {
			continue;
		}
		printf("%c: %d��\n", c, cnt);
	}
}