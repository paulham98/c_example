// [����Լ�] == [��ȯ�Լ�] == [��ȯȣ��]
// -> "��������"�� �ʿ����!
#include<stdio.h>
int fac(int n) {
    if (n == 1) { // "��������"
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
���丮��
N!=Nx(N-1)!
f(n)=nxf(n-1)
: �ڱ��ڽ��Լ��� �ذ��ϱ�����,
�ڱ��ڽ��Լ��� �� ȣ���ϴ� �Լ��� "����Լ�"

5!=5x4x3x2x1=5x4!
4!=4x3x2x1=4x3!
3!=3x2x1
1!=1  vs  1!=1x0!
*/