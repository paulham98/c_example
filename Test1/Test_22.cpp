#include<stdio.h>
void hello() { // 함수 정의
	printf("안녕하세요!\n");
}
void func2(int data) {
	data += 100;
	printf("func2()에서 받은 인자 data= %d\n", data);
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
	printf("교환후; a=%d b=%d\n\n", a, b);





	/*
	// 프로그램을 실행해주세요.->main()를 수행하겠습니다.
		printf("야!");

	// [함수] -> 사용자 정의 함수

	// input: 입력값,인자,인수,매개변수
	// output: 결과값,리턴값,return,반환값,출력값
	// 기능

	// 함수는...
	// 1) 코드의 재사용성 증가
	// 2) 오류의 파급효과 줄임
	// 3) 코드 검사비용 절감
	// 4) 개발시간단축

	hello(); // 함수 호출
	hello();
	hello();

	printf("호!");
	
	func2(10);

	int num = 100;
	func2(num);
	printf("확인1) num=%d입니다.\n", num);

	int data = 1234;
	func2(data);
	printf("확인2) data=%d입니다.\n", data);






	// input X, output X
	// input O, output X
	// input X, output O
	// input O, output O
	*/

}