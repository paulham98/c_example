#include <iostream>
int ncr(int n, int r) {
	if (n == r || r == 0) {
		return 1;
	}
	return ncr(n-1, r-1) + ncr(n - 1, r);
}
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", ncr(a, b));

}