#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void main() {
	srand(time(NULL));
	int data[10];
	int size = sizeof(data) / sizeof(data[0]);
	
	for (int i = 0; i < size; i++) {
		data[i] = rand() % 9 + 1;
	}
	printf("[ ");
	for (int i = 0; i < size; i++) {
		printf("%d ", data[i]);
	}
	printf("]\n");
	for(int i = 1; i <= 9; i++) {
		int cnt = 0;
		for (int a = 0; a < size; a++) {
			if (data[a] == i) {
				cnt++;
			}
		}
		if (cnt == 0) {
				continue;
		}
		printf("%d의개수: %d개\n", i, cnt);
	}
}