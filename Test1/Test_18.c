#include<stdio.h>
void main() {
	// [문자열]

   // 문자배열+'\0'(널 문자,null 문자,1byte)  ==  문자열

	char arr[] = { 'a','p','p','l','e' };
	// 요소는 5개 존재, 5byte

	char str[] = "apple";
	char str1[] = { 'a','p','p','l','e','\0' };
	// 요소는 6개 존재, 6byte

	char str2[10];
	
	//str2 = "banana"; -> xxx
	//배열명 == &배열[0]
	//str2 == &str2[0];      

	//scanf("%s", str2);  이렇게 하면 띄어쓰기나 엔터를 인식하지못함      //byte크기에 유의
	gets(str2);//이 함수는  c++엔 없는 함수라 c파일로 바꿔줘야함
	printf("입력한 문자열은[%s]입니다.\n", str2);
}