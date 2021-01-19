#include<stdio.h>
#include<string.h>
void main() {
	char str[10];
	printf("문자열입력: ");
	scanf("%s", str);
	printf("%d", strlen(str));
	for (int i = 0; i < strlen(str); i++) {
		if ('A' <= str[i] && str[i] <= 'Z') {
			str[i] += 32;
		}
	}
	printf("바뀐 문자열: %s\n", str);

	
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
		printf("%c: %d개\n", c, cnt);
	}
}