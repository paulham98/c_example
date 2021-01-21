#include<stdio.h>
#include<string.h>
void main() {

    // 1) gets(str) -> .c c++에서 문자열 엔터 스페이스를 인식하지 못함 그 대신 get을 씀
    // 2) strlen(str) == int
    // 3) strcpy(str,"kiwi"); <- str = "kiwi";
    // 4) strcat(str1,str2); <- 붙여쓰기
    // 5) strcmp(str,"test") <- 값 비교(str == "test")
    //      같으면 0, 다르면 -1 or 1
    /*
    char str1[10] = "kiwi";
    char str2[10] = "apple";
    char tmp[10];
    strcpy(tmp, str1);
    strcpy(str1, str2);
    strcpy(str2, tmp);
    printf("str1=%s  str2=%s\n", str1, str2);

    char str[20] = "홍길동";
    strcat(str, "님");
    printf("%s\n", str);

    strcpy(str, "test");
    printf("%d\n", strcmp(str, "test"));
    if (strcmp(str, "test") == 0) {
        printf("같다!\n");
    }
    else {
        printf("다르다!\n");
    }
    */
    char id[50]="소환사";
    char tmp[30];
    printf("id입력:");
    scanf("%s", tmp);
    strcat(tmp, "님");
    strcat(id, tmp);
    printf("%s, 반갑습니다!\n\n", id);

    char ans[] = "apple";
    while (1) {
        printf("5자 영단어입력: ");
        scanf("%s", tmp);
        if (strcmp(ans, tmp) == 0) {
            printf("%s! 정답입니다!!\n", ans);
            break;
        }
        printf("정답이 아닙니다!\n");
    }




}