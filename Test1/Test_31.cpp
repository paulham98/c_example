// [����ü]
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student {//�ڷ���ó�� ����
	char name[20]; // ���
	int num;
};
void swap(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
void show(struct student* stu) {
	(*stu).num = 0;// �����ͺ��� "." ������ٿ����ڰ� �켱������ ������ 
	stu->num = 1111; // ������ٿ�����
	printf("%d���л��� %s�Դϴ�.\n", stu->num, stu->name);
}
void main() {

	struct student s1 = { "kim",1001 };
	struct student s2;
	//s2.name = "lee"; // ������ٿ�����
	strcpy(s2.name, "lee");
	s2.num = 1002;
	printf("�̸��Է�: ");
	scanf("%s", s1.name);
	printf("��ȣ�Է�: ");
	scanf("%d", &s1.num);

	show(&s1);
	printf("main(): %d���л��� %s�Դϴ�.\n", s1.num, s1.name);
	show(&s2);
	printf("main(): %d���л��� %s�Դϴ�.\n", s2.num, s2.name);


	struct student STU[2];
	for(int i = 0 ; i<2; i++){
		printf("%d���л��̸�: ", i + 1);
		scanf("%s", STU[i].name);
		STU[i].num = i + 1;
	}
	for (int i = 0; i < 2; i++) {
		printf("%d���л��̸��� %s�Դϴ�.\n", STU[i].num, STU[i].name);
	}

	int n;
	printf("n�Է�: ");
	scanf("%d", &n);
	struct student* data = (struct student*)malloc(n * sizeof(struct student));

	for (int i = 0; i < n; i++) {

	}


	free(data);


}