/*
과제1)
 문자열 1개입력: apple
 (대문자 -> 소문자)
 문자 1개 입력 : c/ p
c는 없는 문자입니다.
p는 2개 존재합니다. 
 

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
    printf("문자입력: ");
    char c;
    int cnt = 0;
    scanf("%c", &c);
    for(int i = 0; i <strSize; i++){
        if(c == str1[i]){
            cnt++;
        }
    }
    if(cnt>0){
        printf("%c는 %d개.\n", c, cnt);
    }else{
        printf("%c는 없는 문자입니다.", c);
    }
    /*
    과제2)
문자열 1개입력 acbc
숨긴 문자열: dfef(3번 뒤로 옮김)
대문자를 섞어써도 되게끔
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