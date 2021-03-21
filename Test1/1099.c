#include<stdio.h>

int main(){
    // (2,2)에서 시작해서 y좌표로 진행. 진행은 길을 알려주기위해 9로 바꿔주고 1만나면 x++하고 다시 진행
    // 2만나면 9로 바꿔주고 끝 
    int box[11][11] = {0, };
    int a;
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            scanf("%d", &a);
            box[i][j] = a;
        }
    }
    for(int i = 1; i < 10; i++){
        for(int j = 1; j < 10; j++){
            if(box[i][j] == 1){//1일땐 9로 바꿔주고 x++
                box[i][j] = 9;
                i++;
                continue;
            }else if(box[i][j] == 2){//2일땐 9로 바꿔주고 끝
                box[i][j] = 9;
                for(int t = 0; t < 10; t++){
                    for(int k =0; k < 10; k++){
                        printf("%d ", box[t][k]);
                    }
                    printf("\n");
                }
                return 0;
            }else{//0이면 9로 바꿔주고 진행
                box[i][j] = 9;
                continue;
            }
        }
    }
    for(int t = 0; t < 10; t++){
        for(int k =0; k < 10; k++){
            printf("%d ", box[t][k]);
        }
    }
    return 0;
}