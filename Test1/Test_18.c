#include<stdio.h>
#include<string.h>
void main() {
	// [문자열]

	// 문자배열+'\0'(널 문자,null 문자,1byte)  ==  문자열

	char arr[] = { 'a','p','p','l','e' };
	// 요소는 5개 존재, 5byte

	char str[] = "apple";
	char str1[] = { 'a','p','p','l','e','\0' };
	// 요소는 6개 존재, 6byte

	char str2[20];
	//str2 = "banana"; -> xxx

	printf("문자열입력: ");
	scanf("%s", str2); // byte(크기)에 유의!
	// 배열명 == &배열[0]
	//gets(str2);
	printf("입력한 문자열은 [%s]입니다.\n", str2);