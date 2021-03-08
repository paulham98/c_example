#include<stdio.h>

int main(){
    char a;
    scanf("%c", &a);
    if(a > 90){
        while(a >= 96){
            printf("%c", a);
            a--;
        }
    }
    if(a <= 90){
        while(a >= 65){
            printf("%c", a);
            a--;
         }
    }
}