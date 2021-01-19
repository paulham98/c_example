#include<stdio.h>
#define Max 5;
void main() {
// c에서 배열은 static이어서 배열의 크기를 직접 지정해줘야함 
// 변수 넣으면 안되고 전처리에서 처리해준 변수만 가능 
	int stu[3];
	// 크기 연산자
	/*
	int i = 10;
	double d = 3.14;
	int size = sizeof(stu) / sizeof(stu[0]); // 요소의 개수==크기==길이

	printf("i의 크기=%d  d의 크기=%d\n", sizeof(i), sizeof(d));
	printf("stu[]배열의 크기=%d  stu[0]요소의 크기=%d\n", sizeof(stu), sizeof(stu[0]));


	for (int i = 0; i < 3; i++) {
		printf("%d번 학생의 점수입력:", i + 1);
		scanf("%d", &stu[i]);
	}
	printf("\n");
	for (int i = 0; i < 3; i++) {
		printf("%d번 학생의 점수는 %d점입니다.\n", i + 1, stu[i]);
	}
	

	//ex1
	int student[3];
	int sum = 0;
	
	for (int i = 0; i < 3; i++) {
		printf("%d번 학생의 점수입력:", i + 1);
		scanf("%d", &student[i]);
		sum += student[i];
	}
	double avg = sum / 3;
	printf("%d\n%.2lf", sum, avg);
	*/
	int data[10];
	for (int i = 0; i < 10; i++) {
		printf("%d번째 입력:", i + 1);
		scanf("%d", &data[i]);
	}
	int cnt = 0;
	for (int i = 0; i < 10; i++) {
		if (data[i] < 0) {
			cnt++;
		}
	}
	printf("\n음수는 총 %d번 입력되었습니다.\n", cnt);

}
