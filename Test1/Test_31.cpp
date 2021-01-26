// [구조체]
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student {//자료형처럼 생각
	char name[20]; // 멤버
	int num;
};
void swap(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
void show(struct student* stu) {
	(*stu).num = 0;// 포인터보다 "." 멤버접근연산자가 우선순위가 더빠름 
	stu->num = 1111; // 멤버접근연산자
	printf("%d번학생은 %s입니다.\n", stu->num, stu->name);
}
void main() {

	struct student s1 = { "kim",1001 };
	struct student s2;
	//s2.name = "lee"; // 멤버접근연산자
	strcpy(s2.name, "lee");
	s2.num = 1002;
	printf("이름입력: ");
	scanf("%s", s1.name);
	printf("번호입력: ");
	scanf("%d", &s1.num);

	show(&s1);
	printf("main(): %d번학생은 %s입니다.\n", s1.num, s1.name);
	show(&s2);
	printf("main(): %d번학생은 %s입니다.\n", s2.num, s2.name);


	struct student STU[2];
	for(int i = 0 ; i<2; i++){
		printf("%d번학생이름: ", i + 1);
		scanf("%s", STU[i].name);
		STU[i].num = i + 1;
	}
	for (int i = 0; i < 2; i++) {
		printf("%d번학생이름은 %s입니다.\n", STU[i].num, STU[i].name);
	}

	int n;
	printf("n입력: ");
	scanf("%d", &n);
	struct student* data = (struct student*)malloc(n * sizeof(struct student));

	for (int i = 0; i < n; i++) {

	}


	free(data);


}