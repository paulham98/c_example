#include<stdio.h>
void hello() { // �Լ� ����
	printf("�ȳ��ϼ���!\n");
}
void func2(int data) {
	data += 100;
	printf("func2()���� ���� ���� data= %d\n", data);
}
void swap(int a, int b) {
	int tmp = a;
	a = b;
	b = tmp;
}
void main() {
	int a = 100; 
	int b = 200;
	swap(a, b);
	printf("��ȯ��; a=%d b=%d\n\n", a, b);





	/*
	// ���α׷��� �������ּ���.->main()�� �����ϰڽ��ϴ�.
		printf("��!");

	// [�Լ�] -> ����� ���� �Լ�

	// input: �Է°�,����,�μ�,�Ű�����
	// output: �����,���ϰ�,return,��ȯ��,��°�
	// ���

	// �Լ���...
	// 1) �ڵ��� ���뼺 ����
	// 2) ������ �ı�ȿ�� ����
	// 3) �ڵ� �˻��� ����
	// 4) ���߽ð�����

	hello(); // �Լ� ȣ��
	hello();
	hello();

	printf("ȣ!");
	
	func2(10);

	int num = 100;
	func2(num);
	printf("Ȯ��1) num=%d�Դϴ�.\n", num);

	int data = 1234;
	func2(data);
	printf("Ȯ��2) data=%d�Դϴ�.\n", data);






	// input X, output X
	// input O, output X
	// input X, output O
	// input O, output O
	*/

}