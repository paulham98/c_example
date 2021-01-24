// [재귀함수] == [순환함수] == [순환호출]
// -> "종료조건"을 필요로함!
#include<stdio.h>
int fac(int n) {
    if (n == 1) { // "종료조건"
        return 1;
    }
    return n * fac(n - 1);
}
void show(int num) {
    if (num /10 != 0) {
        show(num / 10);
    }
    printf("%d", num % 10);
}
void main() {
    //printf("5!= %d\n", fac(5));
    show(1234);
}
/*
팩토리얼
N!=Nx(N-1)!
f(n)=nxf(n-1)
: 자기자신함수를 해결하기위해,
자기자신함수를 또 호출하는 함수를 "재귀함수"

5!=5x4x3x2x1=5x4!
4!=4x3x2x1=4x3!
3!=3x2x1
1!=1  vs  1!=1x0!
*/