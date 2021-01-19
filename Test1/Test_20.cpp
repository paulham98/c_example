/*
과제1)
 문자열 1개입력: apple
 (대문자 -> 소문자)
 문자 1개 입력 : c/ p
c는 없는 문자입니다.
p는 2개 존재합니다. 
 
과제2)
문자열 1개입력 acbc
숨긴 문자열: dfef(3번 뒤로 옮김)
대문자를 섞어써도 되게끔
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