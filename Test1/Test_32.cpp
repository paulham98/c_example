//#include<stdio.h> 포인터 헤더파일에존재
#include<stdlib.h>
#include"pointheader.h"
// 모듈화 프로그래밍
void main() {
	// 1) 몇개의 점을 생성
   // 2) 해당 개수만큼 점 정보 입력
   // 3) showPoint()로 정보출력해주세요!~~
   // 4) movePoint(struct point p,int x)로 점을 이동
   //     p(10,10) -> p(10+x,10+x)
	int n;
	scanf("%d", &n);
	struct point* p = (struct point*)malloc(n * sizeof(struct point));

	for (int i = 0; i < n; i++) {
		printf("%d번째 색깔: ", i + 1);
		scanf("%s", p[i].color);
		printf("x좌표입력:");
		scanf("%d", &p[i].x);
		printf("y좌표입력:");
		scanf("%d", &p[i].y);
		//showPoint(p[i]);
		p[i].showPoint();
	}
	p[0].movePoint(10);
	p[0].chcolor();
	p[0].showPoint();
	//인라인으로 구조체 자체에서 함수를 갖기전에는 이렇게
	//struct point movePoint(&p[0], 10);
	//showPoint(p[0]); 
	
}