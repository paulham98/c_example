/*
����1)
 ���ڿ� 1���Է�: apple
 (�빮�� -> �ҹ���)
 ���� 1�� �Է� : c/ p
c�� ���� �����Դϴ�.
p�� 2�� �����մϴ�. 
 
����2)
���ڿ� 1���Է� acbc
���� ���ڿ�: dfef(3�� �ڷ� �ű�)
�빮�ڸ� ����ᵵ �ǰԲ�
aAzZ -> dDcC
*/
#include<stdio.h>
#include<string.h>
void main(){
    char str1[10];
    scanf("%s", str1);
    for (int i = 0; i < strlen(str1); i++) {
		if ('A' <= str1[i] && str1[i] <= 'Z') {
			str1[i] += 32;
            // uppercase
		}
	}
    char chr;
    int cnt = 0;
    scanf("%s", chr);
    for(int i = 0; i < strlen(str1); i++){
        if(chr == str1[0]){
            cnt++;
        }
    }
    if(cnt>0){
        printf("%sis %d.", chr, cnt);
    }else{
        printf("there is no %s.", chr);
    }

}