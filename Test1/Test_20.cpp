/*
����1)
 ���ڿ� 1���Է�: apple
 (�빮�� -> �ҹ���)
 ���� 1�� �Է� : c/ p
c�� ���� �����Դϴ�.
p�� 2�� �����մϴ�. 
 

*/
#include<stdio.h>
#include<string.h>
void main(){
    
    char str1[10];
    scanf("%s", str1);
    int strSize = 0;
    strSize = strlen(str1);
    for (int i = 0; i < strSize; i++) {
		if ('A' <= str1[i] && str1[i] <= 'Z') {
			str1[i] += 32;
            // uppercase
		}
	}
    printf("�����Է�: ");
    char c;
    int cnt = 0;
    scanf("%c", &c);
    for(int i = 0; i <strSize; i++){
        if(c == str1[i]){
            cnt++;
        }
    }
    if(cnt>0){
        printf("%c�� %d��.\n", c, cnt);
    }else{
        printf("%c�� ���� �����Դϴ�.", c);
    }
    /*
    ����2)
���ڿ� 1���Է� acbc
���� ���ڿ�: dfef(3�� �ڷ� �ű�)
�빮�ڸ� ����ᵵ �ǰԲ�
aAzZ -> dDcC
    
    char str[4];
    scanf("%s", str);
    //int strSize = 0;
    //strSize = strlen(str);
    for (int i = 0; i <strlen(str); i++) {
        if ('A' <= str[i] && str[i] <= 'Z') {// A -> D
            if (str[i] + 3 > 'Z') {
                str[i] -= 23;
            }
            else {
            str[i] += 3;
            }
        }
        else if ('a' <= str[i] && str[i] <= 'z') {// a->d
            if (str[i] + 3 > 'z') {
                str[i] -= 23;
            }
            else {
            str[i] += 3;
            }
        }
    }
        printf("%s\n", str);
        */
}