#include<stdio.h>
#include<stdlib.h>

int main(){
    int i, x, y;
    int** pptr = (int**)malloc(sizeof(int*) * 8);
    for(i = 0; i < 8; i++){
        *(pptr + i) = (int *)malloc(sizeof(int) * 7);
    }
    for(y= 0; y < 8; y++){
        for(x = 0; x < 7; x++){
            *(*(pptr + y) + x) = 7 * y + x+1;
        }
    }
    for(y = 0; y < 8; y++){
        for(x= 0; x < 7; x++){
            printf("%3d", *(*(pptr + y) + x));
        }
        printf("\n");
    }
    for(y= 0; y < 8; y++){
        free(*(pptr+ y));
    }
    return 0;
}