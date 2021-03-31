#include<stdio.h>
#include<stdlib.h>

int main(){
    int ms[5][5] = {0,};
    int a = 0;
    int b = 2;
    int cnt = 1;
    ms[a][b] = cnt;
    for(int i =0;i <5; i++){
        for(int j = 0; j < 5; j++){
            ++cnt;
            --a,--b;
            if(a < 0) a = 4;
            if(b < 0) b = 4;
            if(ms[a][b] != 0) {
                --b;
                a += 2;
                if(a < 0 || a > 5) a = 4;
                if(b < 0) b =4;
            }
            
            ms[a][b] = cnt;
             
        }
    }
    for(int i =0;i <5; i++){
        for(int j = 0; j < 5; j++){
            printf("%d ", ms[i][j]);
        }
        printf("\n");
    }
    
}