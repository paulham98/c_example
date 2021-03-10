#include<stdio.h>

int main(){
    int b;
    scanf("%x", &b);
    for(int i = b; i < 16; i++){
        for(int j = 1; j < 16; j++){
            int a = i*j;
            printf("%x x %x = %x\n", i, j, a);
        }
    
    }
}