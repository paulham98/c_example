#include<stdio.h>//STandInOut.Headerfile ��ó�����
int sum(int a,int b);
int main() {
	/*
	//printf("�ȳ��ϼ���!\n");
	//printf("������ ���� �ߺ�Ź�帳�ϴ�~^^\n\n");
	
	//int sum = a + b;
	//printf("a+b= %d %d�Դϴ�.\n\n", sum,5);
	// %->����������

	//double d = 3.1415926;
	//char c = 'A';
	//printf("%lf  %c\n", d, c);

	//�Է� �޴¹�
	//int num;
	//printf("�����Է� :");
	scanf("%d", &num); // &-> �ּҿ�����
	//scanf_s -> ���� �ȵǴ� ����
	//�Է��Լ��� �ۼ� �Ŀ� �����Ҷ� �����߻�
	//1. ������Ʈ �Ӽ� ��ó���� ���� _
	//2. ������Ʈ �Ӽ� �Ϲ� 
	*/
	int a = 10;
	int b = 20;
	sum(a, b);

}
//data type
//int ����%d , double �Ǽ�%lf, char ����%c
int sum(int a, int b) {
	int sum = a + b;
	printf("%d", sum);
	return 0;
}