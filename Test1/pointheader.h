#pragma once
#include<stdio.h>
struct point {
	char color[10];
	int x;
	int y;
	//����ü�� �Լ� ���
	inline void showPoint() {
		printf("%s(%2d,%2d)\n", color, x, y);
		//�Լ� ����ó�� ��� ����
	}
	inline void movePoint(int value);
	inline void chcolor() {
		printf("����%s ���Դϴ�.", color);
		printf("���� ����:");
		scanf("%s", color);
	}
	inline void mid(struct point &p) {
		int midX = (x + p.x) / 2;
		int midY = (y + p.y) / 2;
		x = midX ;
		y = midY ;
		p.x = midX;
		p.y = midY;
	}
};
	/*
	void showPoint(struct point p) {
		printf("%s(%2d,%2d)\n", p.color, p.x, p.y);//2ĭ Ȯ��
	}
	*/
	// �Լ������� ����Ҷ� �Ҽ��� ���������  
	//inline void point :: movePoint(struct point* p, int x) {
	inline void point::movePoint(int value) {
		x += value;
		y += value;
	}
	// :: ������������ / ~~~�� �����. ��� ��
