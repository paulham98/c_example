#include<stdio.h>
#include<stdlib.h>
void main() {
    /*
	int n;
	int N;
	scanf("%d%d", &n, &n);
    int** STU = (int**)malloc(N * sizeof(int*));

    for (int i = 0; i < N; i++) {
        printf("%d��°�л�\n", i + 1);
        STU[i] = (int*)malloc(n * sizeof(int));
        for (int j = 0; j < n; j++) {
            printf("%d��°����: ", j + 1);
            scanf("%d", &STU[i][j]);
        }
        printf("\n");
    }
    */
    // ���� 1�� �Է�: 5
  // 5x5
  // 0 or 1
  // x,y �Է�-> 0�̸� ��� / 1�̸� GameOver
    int a;
    printf("����: ");
    scanf("%d", &a);

    int** data = (int**)malloc(a * sizeof(int*));
    for (int i = 0; i < a; i++) {
        data[i] = (int*)malloc(a * sizeof(int));//y�� �����
        for (int j = 0; j < a; j++) {
            //x�ุ���
            data[i][j] = rand() % 2;//0,1 �������� ä���
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
            printf("x,y��ǥ �Է�");
            scanf("%d%d", &x, &y);
            if (data[x - 1][y - 1]) {
                printf("GameOver...\n");
                break;
            }
            printf("���!\n");
        }
    

    // ��������,�����
    //5x5 ó���� �ƴ϶� x�� ������ ���δٸ� �迭�� ũ�⸦ �������ִ°�
}
   
    
    
    
    
    
    
    
   