#include<stdio.h>//STandInOut.Headerfile ��ó�����
void main() {
	printf("�ȳ��ϼ���!\n");
	printf("������ ���� �ߺ�Ź�帳�ϴ�~^^\n\n");
	int a = 10;
	int b = 20;
	int sum = a + b;
	printf("a+b= %d %d�Դϴ�.\n\n", sum,5);
	// %->����������

	double d = 3.1415926;
	char c = 'A';
	printf("%lf  %c\n", d, c);

	//�Է� �޴¹�
	int num;
	printf("�����Է� :");
	scanf("%d", &num); // &-> �ּҿ�����
	//scanf_s -> ���� �ȵǴ� ����
	//�Է��Լ��� �ۼ� �Ŀ� �����Ҷ� �����߻�
	//1. ������Ʈ �Ӽ� ��ó���� ���� _
	//2. ������Ʈ �Ӽ� �Ϲ� 
}
//data type
//int ����%d , double �Ǽ�%lf, char ����%c