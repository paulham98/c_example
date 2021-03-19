#include<stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    int b= 0;
    // int** box = (int**)malloc(sizeof(int*) * a);
    int pi[5][5]= {0,};
    while(b < a){
        int q,w,e,r = 0;
        scanf("%d %d %d %d", &q, &w, &e, &r);
        if( w == 0){//가로
            for(int i = r-1; i < q; i++){
            pi[e-1][i] = 1;
            }
        }else{//세로 
            for(int i = e-1; i <= q; i++){
                pi[i][r-1] = 1;
            }
        }
        b++;
    }

    for(int i = 0; i < 5; i++){
        for(int j=0; j< 5; j++){
            printf("%d ", pi[i][j]);
        }
        printf("\n");
    }
    return 0;
}
