#include<stdio.h>
#include<stdlib.h>//���Ĵٵ� ���̺귯�� �ش���
#include<time.h>
#define _CRT_SECURE_NO_WARNINGS
void main() {
	/*
     [���� ū ������ ã��]

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
    printf("���� ���� ���� %d�Դϴ�.\n", min);
    printf("index[%d]�� �����մϴ�.", index);
    */
    //[����] -> �˻��� �����ϰ��ϱ� ���ؼ� ����!
    srand(time(NULL));
    int data[10];
    for (int i = 0; i < 10; i++) {
        data[i] = rand() % 100 + 1;// %100 -> 0~99 , +1 �ϸ� 1~100
        printf("%d ", data[i]);
    }
    printf("\n");
    for (int i = 0; i < 10; i++) {// ��ҵ��� ����
        for (int j = 1; j < 9; j++) {//��Ҿȿ��� ���ϴ� Ƚ��
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
    //���� ���� == ��ǰ ����
}