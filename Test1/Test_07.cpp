#include<stdio.h>
void main() {
    /*// ���� 2�� �Է�
  // ������(����) 1�� �Է�
    int n1, n2;
    char op;
    printf("����2���Է�: ");
    scanf("%d%d", &n1, &n2);
    printf("������ 1���Է�: ");
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
        printf("�߸��� �������Դϴ�!\n");
    }

    char sign;
    scanf(" %c", &sign);
    if (sign == 'R' || sign == 'r') {
        printf("����!");
    }
    else if (sign == 'Y' || sign == 'y') {
        printf("����!");
    }
    else if (sign == 'G' || sign == 'g') {
        printf("����!");
    }
    

    // ctrl +a ��ü ����, ctrl +k. f ������
    double a, b, c;
    scanf("%lf,%lf,%lf", &a, &b, &c);// double �϶��� %lf float �϶��� %f long double �϶��� %Lf 
    if (a < b && a < c) {
            printf("���� ���� �Ǽ���%lf", a);
        }
        else if (b < a && b <c) {
            printf("���� ���� �Ǽ���%lf", b);
        }else {
        printf("���� ���� �Ǽ���%lf", c);
    }
    
    int a;
    scanf("%d", &a);
    switch (a) {
    case 3 :
    case 4:
    case 5:
        printf("��\n");
        break;
    case 6 :
    case 7:
    case 8:
        printf("����\n");
        break;
    case 9:
    case 10:
    case 11:
        printf("����\n");
        break;
    case 12:
    case 1:
    case 2:
        printf("�ܿ�\n");
        break;
    default:
        printf("��ȿ�������� �������Դϴ�!\n");
    }
*/
    char color;
    printf("���Է�: ");
    scanf(" %c", &color);
    switch (color) {
    case 'R':
    case 'r':
        printf("����!\n");
        break;
    case 'Y':
    case 'y':
        printf("����!\n");
        break;
    case 'G':
    case 'g':
        printf("����!\n");
        break;
    default:
        printf("�߸��Է�...\n");
    }


}