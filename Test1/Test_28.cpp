//���� �����
#include<stdio.h>
void main() {
	FILE* in = fopen("test.txt", "r");//r -> read mode
	FILE* out = fopen("output.txt", "w"); // ��� ������..
   // ����, ������ �����Ѵٸ�, ����Ⱑ �����

	/*
	int num;
	//scanf�� cmdâ�� scan
	fscanf(in, "%d", &num);// ���Ͽ��� ��ĵ 
	printf("����� ������ %d�Դϴ�.\n", num);
	*/ 
	// 1. ���Ͽ� ����� �����͵��� ���
	// 2. ��ִ��� �ľ�
	// 3. ������ ����
	// 4. ������ ���
	// 5. output.txt�� �����Ͽ� ���� ����

	int num;
	int cnt = 0;
	int sum = 0;
	printf("[ ");
	while (!feof(in)) { // feof(in) in���� ������? -> T / F
		fscanf(in, "%d", &num);
		printf("%d ", num);
		cnt++;
		sum += num;
	}
	printf("]\n");

	double avg = sum * 1.0 / cnt;
	fprintf(out, "������ ������ %d���̸�\n������ %d�̰�,\n����� %.2lf�Դϴ�.\n", cnt, sum, avg);



	fclose(in);//������ ���� ���� �ݴ°͵� ������� 
	fclose(out);

}