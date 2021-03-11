#include<stdio.h>
int main() {
	int n = 0;
	int cnt = 0;
	int c = 0;
	scanf("%d", &n);
	while(n >= c) {
		cnt++;
		c += cnt;
	}
	printf("%d", c);

	return 0;
}