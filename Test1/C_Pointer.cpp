#include<iostream>
using namespace std;

class doublePointer {
public:
	int b[3][2] = { {0, 1}, {2, 3}, {4, 5} };
	int(*bpp)[2] = b;
	int* bp = b[0];
	int i, j;
	void print(void) {

		printf("b : %p\t*b : %p\t**b : %d\n", b, *b, **b);
		printf("bpp: %p\t*bpp: %p\t**bpp: %d\n", bpp, *bpp, **bpp);
		/*
		for (i = 0; i < 3; i++) {
			bp = b[i];

			printf("\t*[%d]: %d\tb[%d]: %p\tbPP+%d: %p\t*(bpp+%d): %p\n",
				i, *b[i], i, b[i], i, bpp + i, i, *(bpp + i));
			for (j = 0; j < 2; j++) {

			}
		}
		*/
	}
};

int main() {
	int a[5] = { 0, 1, 2, 3, 4 };
	int* ap = a;
	printf("%d\n", *(ap + 2));
	printf("%d\n", ap[3]);
	doublePointer dp;
	dp.print();
	
	return 0;
}

