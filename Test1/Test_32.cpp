//#include<stdio.h> ������ ������Ͽ�����
#include<stdlib.h>
#include"pointheader.h"
// ���ȭ ���α׷���
void main() {
	// 1) ��� ���� ����
   // 2) �ش� ������ŭ �� ���� �Է�
   // 3) showPoint()�� ����������ּ���!~~
   // 4) movePoint(struct point p,int x)�� ���� �̵�
   //     p(10,10) -> p(10+x,10+x)
	int n;
	scanf("%d", &n);
	struct point* p = (struct point*)malloc(n * sizeof(struct point));

	for (int i = 0; i < n; i++) {
		printf("%d��° ����: ", i + 1);
		scanf("%s", p[i].color);
		printf("x��ǥ�Է�:");
		scanf("%d", &p[i].x);
		printf("y��ǥ�Է�:");
		scanf("%d", &p[i].y);
		//showPoint(p[i]);
		p[i].showPoint();
	}
	p[0].movePoint(10);
	p[0].chcolor();
	p[0].showPoint();
	//�ζ������� ����ü ��ü���� �Լ��� ���������� �̷���
	//struct point movePoint(&p[0], 10);
	//showPoint(p[0]); 
	
}