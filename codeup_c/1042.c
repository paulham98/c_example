#include<stdio.h>

int main(){
    int a,b;
    scanf("%d,%d", &a, &b);
    a /= (float)b;
    printf("%.3f", (float)a);
}