#include<stdio.h>
#include<stdlib.h>
void main() {
    /*
	int n;
	int N;
	scanf("%d%d", &n, &n);
    int** STU = (int**)malloc(N * sizeof(int*));

    for (int i = 0; i < N; i++) {
        printf("%d번째학생\n", i + 1);
        STU[i] = (int*)malloc(n * sizeof(int));
        for (int j = 0; j < n; j++) {
            printf("%d번째시험: ", j + 1);
            scanf("%d", &STU[i][j]);
        }
        printf("\n");
    }
    */
    // 정수 1개 입력: 5
  // 5x5
  // 0 or 1
  // x,y 입력-> 0이면 통과 / 1이면 GameOver
    int a;
    printf("정수: ");
    scanf("%d", &a);

    int** data = (int**)malloc(a * sizeof(int*));
    for (int i = 0; i < a; i++) {
        data[i] = (int*)malloc(a * sizeof(int));//y축 만들기
        for (int j = 0; j < a; j++) {
            //x축만들기
            data[i][j] = rand() % 2;//0,1 랜덤으로 채우기
        }
    }
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < a; j++) {
                printf("%d", data[i][j]);
            }
            printf("\n");

        }
        while (1) {
            int x, y;
            printf("x,y좌표 입력");
            scanf("%d%d", &x, &y);
            if (data[x - 1][y - 1]) {
                printf("GameOver...\n");
                break;
            }
            printf("통과!\n");
        }
    

    // 비정방형,래기드
    //5x5 처럼이 아니라 x축 각각이 서로다른 배열의 크기를 가지고있는것
}
   
    
    
    
    
    
    
    
   