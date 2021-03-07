#include<stdio.h>

int main(){
    int a;
    reload:
    scanf("%d", &a);
    printf("%d", a);
    if(a != 0) goto reload;// reload라고 적혀있는 레이블로 이동 실행
}