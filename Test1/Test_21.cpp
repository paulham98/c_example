#include<stdio.h>
#include<string.h>
void main() {

    // 1) gets(str) -> .c c++���� ���ڿ� ���� �����̽��� �ν����� ���� �� ��� get�� ��
    // 2) strlen(str) == int
    // 3) strcpy(str,"kiwi"); <- str = "kiwi";
    // 4) strcat(str1,str2); <- �ٿ�����
    // 5) strcmp(str,"test") <- �� ��(str == "test")
    //      ������ 0, �ٸ��� -1 or 1
    /*
    char str1[10] = "kiwi";
    char str2[10] = "apple";
    char tmp[10];
    strcpy(tmp, str1);
    strcpy(str1, str2);
    strcpy(str2, tmp);
    printf("str1=%s  str2=%s\n", str1, str2);

    char str[20] = "ȫ�浿";
    strcat(str, "��");
    printf("%s\n", str);

    strcpy(str, "test");
    printf("%d\n", strcmp(str, "test"));
    if (strcmp(str, "test") == 0) {
        printf("����!\n");
    }
    else {
        printf("�ٸ���!\n");
    }
    */
    char id[50]="��ȯ��";
    char tmp[30];
    printf("id�Է�:");
    scanf("%s", tmp);
    strcat(tmp, "��");
    strcat(id, tmp);
    printf("%s, �ݰ����ϴ�!\n\n", id);

    char ans[] = "apple";
    while (1) {
        printf("5�� ���ܾ��Է�: ");
        scanf("%s", tmp);
        if (strcmp(ans, tmp) == 0) {
            printf("%s! �����Դϴ�!!\n", ans);
            break;
        }
        printf("������ �ƴմϴ�!\n");
    }




}