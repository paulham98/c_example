#include<stdio.h>
#define MAX 10
void f1(int* const n) {
	*n = 100;
	printf("f1()�Լ��Դϴ�.\n");
	printf("���� ����� �ּ�: %d\n", n);
}
void f2(const int* a,int len) {//�迭�� ���ڷ� ������ �ּҰ����� �Ѵ�
	for (int i = 0; i < 3; i++) {
		printf("%d", a[i]);
	}
}
void f3(const char* n) {
	n = "apple";
	printf("f3()�Լ��Դϴ�.\n");
	printf("���� ����� �ּ�: %d\n", n);
}

void main() {
	/*
	// ������ �����ϰԵǸ�...
	// �޸𸮰���+�ּ� +������
	// const: �ɺ��� ��� -> [���ȭ]

	int i = 10;
	const int* ip = &i; // ����̵Ǵ� Ÿ���� const
	// *ip = 100; xxx
	// ��, �Ǽ��� �����͸� ���� ������������ ����

	int i2 = 20;
	ip = &i2;
	// printf("%d %d\n", i2, *ip);

	int* const ip2 = &i; // ������ �� ��ü�� const
	// ip2 = &i2; xxx
	// �������� ��ġ������ ������
	*ip2 = 11;
	printf("%d %d\n", i, *ip2);

	// �Ǽ�����
	// ����Ұ�����
	
	int v1 = 10;
	int v2 = 20;
	int* p = &v1;
	const int* p2 = &v1;
	int* const p3 = &v1;

	v1 = 30;
	*p = 40;
	//*p2 = 50;
	p2 = &v2;
	*p3 = 60;
	//p3 = &v2;

	printf("%d %d %d %d %d\n", v1, v2, *p, *p2, *p3);
	*/
	int n = 10;
	int nArr[] = { 11,12,13 };
	char nStr[] = "banana";// ���ڹ迭 + '\0' == ���ڿ�
	f3(nStr);
	printf("�ּ�: %d\n", &nStr[0]);
	printf("��: %s\n", nStr);
	const char* str = "apple";

	/*
	f1(&n);
	printf("n=%d  %d\n", n, &n);
	int arr[] = { 1,2,3 };
	f2(arr, sizeof(arr)/sizeof(arr[0]));
	*/

}