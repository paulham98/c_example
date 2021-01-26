#pragma once
#include<stdio.h>
struct point {
	char color[10];
	int x;
	int y;
	//구조체에 함수 담기
	inline void showPoint() {
		printf("%s(%2d,%2d)\n", color, x, y);
		//함수 원형처럼 사용 가능
	}
	inline void movePoint(int value);
	inline void chcolor() {
		printf("현재%s 색입니다.", color);
		printf("색깔 변경:");
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
		printf("%s(%2d,%2d)\n", p.color, p.x, p.y);//2칸 확보
	}
	*/
	// 함수원형을 사용할때 소속을 말해줘야함  
	//inline void point :: movePoint(struct point* p, int x) {
	inline void point::movePoint(int value) {
		x += value;
		y += value;
	}
	// :: 스코프연산자 / ~~~의 멤버다. 라는 뜻
