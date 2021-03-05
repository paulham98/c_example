#include<stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a,&b);
    printf("%d\n", (a+b));
    printf("%d\n", (a-b));
    printf("%d\n", (a*b));
    printf("%d\n", (a/b));
    printf("%.3f", (float)(a%b));


}