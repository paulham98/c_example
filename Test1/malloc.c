#include<stdio.h>
#include<stdlib.h>

int main(){
    // *pc자체로는 의미가 없다 pc안에도 넣어줘야 한다
    char *pc = NULL;
    pc = (char *)malloc(100 * sizeof(char));// char 바이트에 100개 만큼 할당
    int i = 0;
    if (pc == NULL){
        printf("동적 메모리 할당에 실패했습니다. \n");
        exit(1);
    }
    // pc가 가르키는 포인터를 1씩 증가시켜 알파벳 넣기
    for(i = 0; i < 26; i++){
        *(pc + i) = 'a' + i;
    }
    *(pc + i) = 0;// 0은 NULL값을 가르키는데 배열에서 NULl값은 끝을 얘기함
    printf("%s\n", pc);
    free(pc);
    return 0;
}