#include<stdio.h>
void main() {
    /*// 정수 2개 입력
  // 연산자(문자) 1개 입력
    int n1, n2;
    char op;
    printf("정수2개입력: ");
    scanf("%d%d", &n1, &n2);
    printf("연산자 1개입력: ");
    scanf(" %c", &op);

    if (op == '+') {
        printf("%d\n", n1 + n2);
    }
    else if (op == '-') {
        printf("%d\n", n1 - n2);
    }
    else if (op == '*') {
        printf("%d\n", n1 * n2);
    }
    else if (op == '/') {
        printf("%d\n", n1 / n2);
    }
    else if (op == '%') {
        printf("%d\n", n1 % n2);
    }
    else {
        printf("잘못된 연산자입니다!\n");
    }

    char sign;
    scanf(" %c", &sign);
    if (sign == 'R' || sign == 'r') {
        printf("정지!");
    }
    else if (sign == 'Y' || sign == 'y') {
        printf("주의!");
    }
    else if (sign == 'G' || sign == 'g') {
        printf("진행!");
    }
    

    // ctrl +a 전체 선택, ctrl +k. f 줄정렬
    double a, b, c;
    scanf("%lf,%lf,%lf", &a, &b, &c);// double 일때는 %lf float 일때는 %f long double 일때는 %Lf 
    if (a < b && a < c) {
            printf("가장 작은 실수는%lf", a);
        }
        else if (b < a && b <c) {
            printf("가장 작은 실수는%lf", b);
        }else {
        printf("가장 작은 실수는%lf", c);
    }
    
    int a;
    scanf("%d", &a);
    switch (a) {
    case 3 :
    case 4:
    case 5:
        printf("봄\n");
        break;
    case 6 :
    case 7:
    case 8:
        printf("여름\n");
        break;
    case 9:
    case 10:
    case 11:
        printf("가을\n");
        break;
    case 12:
    case 1:
    case 2:
        printf("겨울\n");
        break;
    default:
        printf("유효하지않은 연산자입니다!\n");
    }
*/
    char color;
    printf("색입력: ");
    scanf(" %c", &color);
    switch (color) {
    case 'R':
    case 'r':
        printf("정지!\n");
        break;
    case 'Y':
    case 'y':
        printf("주의!\n");
        break;
    case 'G':
    case 'g':
        printf("진행!\n");
        break;
    default:
        printf("잘못입력...\n");
    }


}