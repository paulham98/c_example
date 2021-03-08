#include<stdio.h>

int main(){
    int a = 0;// 1부터
    int b = 0;// c와 같아질때 까지
    int c;
    scanf("%d", &c);
    while(b <=c){
        a++;
        b += a;
    }
    printf("%d", a-1);
}