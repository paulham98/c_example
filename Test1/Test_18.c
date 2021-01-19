#include<stdio.h>
#include<string.h>
void main() {
	// [���ڿ�]

   // ���ڹ迭+'\0'(�� ����,null ����,1byte)  ==  ���ڿ�

	char arr[] = { 'a','p','p','l','e' };
	// ��Ҵ� 5�� ����, 5byte

	char str[] = "apple";
	char str1[] = { 'a','p','p','l','e','\0' };
	// ��Ҵ� 6�� ����, 6byte

	char str2[10];
	
	//str2 = "banana"; -> xxx
	//�迭�� == &�迭[0]
	//str2 == &str2[0];      

	//scanf("%s", str2);  �̷��� �ϸ� ���⳪ ���͸� �ν���������      //byteũ�⿡ ����
	// gets(str2);//�� �Լ���  c++�� ���� �Լ��� c���Ϸ� �ٲ������
	// printf("�Է��� ���ڿ���[%s]�Դϴ�.\n", str2);
}