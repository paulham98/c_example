#include<stdio.h>

int main(){
    printf("%d", ~-3);
    /*
    컴퓨터에 저장되는 모든 데이터들은 2진수 형태로 바뀌어 저장된다.
0과 1로만 구성되는 비트단위들로 변환되어 저장되는데,
양의 정수는 2진수 형태로 바뀌어 저장되고,
음의 정수는 "2의 보수 표현"방법으로 저장된다.

예를 들어 int형(4바이트(byte), 32비트)으로 선언된 변수에 양의 정수 5를 저장하면
5의 2진수 형태인 101이 32비트로 만들어져
00000000 00000000 00000000 00000101
로 저장된다.(공백은 보기 편하도록 임의로 분리)

int 형의 정수 0은
00000000 00000000 00000000 00000000

그리고 -1은 0에서 1을 더 빼고 32비트만 표시하는 형태로
11111111 11111111 11111111 11111111 로 저장된다.

-2는 -1에서 1을 더 빼면 된다.
11111111 11111111 11111111 11111110 로 저장된다.

그래서 int 형으로 선언된 변수에는 최소 -2147483648 을 의미하는
10000000 00000000 00000000 00000000 부터

최대 +2147483647 을 의미하는
01111111 11111111 11111111 11111111 로 저장될 수 있는 것이다.

그렇다면 -2147483648
10000000 00000000 00000000 00000000 에서 1을 더 뺀다면?

01111111 11111111 11111111 11111111 이 된다.
즉 -2147483649 가 아닌 +2147483647 이 되는 것이다.

이러한 것을 오버플로우(overflow, 넘침)라고 한다.

이러한 내용을 간단히 표시하면, 정수 n이라고 할 때,

~n = -n - 1
-n = ~n + 1 과 같은 관계로 표현된다.

이 관계를 그림으로 그려보면 마치 원형으로 수들이
상대적으로 배치된 것과 같다.
    */

}