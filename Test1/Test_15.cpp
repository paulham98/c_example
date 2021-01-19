#include<stdio.h>
#include<stdlib.h>//스탠다드 라이브러리 해더값
#include<time.h>
#define _CRT_SECURE_NO_WARNINGS
void main() {
	/*
     [가장 큰 데이터 찾기]

    int data[] = { 4,3,10,2,9,1,5 };
    int size = sizeof(data) / sizeof(data[0]);

    int min = data[0];
    int index;
    for (int i = 1; i < size; i++) {
        if (min > data[i]) {
            min = data[i];
            index = i;
        }  
    }
    printf("가장 작은 값은 %d입니다.\n", min);
    printf("index[%d]에 존재합니다.", index);
    */
    //[정렬] -> 검색을 용이하게하기 위해서 수행!
    srand(time(NULL));
    int data[10];
    for (int i = 0; i < 10; i++) {
        data[i] = rand() % 100 + 1;// %100 -> 0~99 , +1 하면 1~100
        printf("%d ", data[i]);
    }
    printf("\n");
    for (int i = 0; i < 10; i++) {// 요소들의 개수
        for (int j = 1; j < 9; j++) {//요소안에서 비교하는 횟수
            if (data[j] > data[j + 1]) {
                int tmp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = tmp;
            }
        }
        for (int a = 0; a < 10; a++) {
            printf("%d ", data[a]);
        }
        printf("\n");
   }
    //버블 정렬 == 거품 정렬
}