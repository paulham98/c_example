//파일 입출력
#include<stdio.h>
void main() {
	FILE* in = fopen("test.txt", "r");//r -> read mode
	FILE* out = fopen("output.txt", "w"); // 없어도 괜찮다..
   // 만약, 파일이 존재한다면, 덮어쓰기가 진행됨

	/*
	int num;
	//scanf은 cmd창에 scan
	fscanf(in, "%d", &num);// 파일에서 스캔 
	printf("저장된 정수는 %d입니다.\n", num);
	*/ 
	// 1. 파일에 저장된 데이터들을 출력
	// 2. 몇개있는지 파악
	// 3. 데이터 총합
	// 4. 데이터 평균
	// 5. output.txt에 정리하여 정보 저장

	int num;
	int cnt = 0;
	int sum = 0;
	printf("[ ");
	while (!feof(in)) { // feof(in) in파일 끝났니? -> T / F
		fscanf(in, "%d", &num);
		printf("%d ", num);
		cnt++;
		sum += num;
	}
	printf("]\n");

	double avg = sum * 1.0 / cnt;
	fprintf(out, "데이터 개수는 %d개이며\n총합은 %d이고,\n평균은 %.2lf입니다.\n", cnt, sum, avg);



	fclose(in);//파일을 열면 파일 닫는것도 해줘야함 
	fclose(out);

}