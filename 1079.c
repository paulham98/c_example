#include<stdio.h>

int main(){
    char a;
    scanf("%c", &a);
    if( a != 'a'){
        printf("%c", a);
        while(a != 'a'){
            scanf("%c", &a);
            printf("%c", a);
        }
    }else{
        printf("%c\n", a);
    }
}