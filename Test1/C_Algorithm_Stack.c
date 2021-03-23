/* 스택 구현 
기능 ; push, pop, peek, del, isEmpty, getSize, print
1. 역순 문자열 만들기
2. 수식의 괄호검사
3. 수식의 후위 표기법 변환
4. 후위 표기 수식의 연산
*/
#include<stdio.h>
#include<stdlib.h>
#define STACK_SIZE 100

void push(char input);
void print(void);
char pop();
char peek(void);
int isEmpty(void);
int getSize(void);
void reverse(void);

char stack[STACK_SIZE];
int top = -1;

int main(){
    int sel = 1;
    char ch;
    
    while(sel!=0){
        // system("clear");
        printf("%d\n", top);
        printf("<MENU>\n");
        printf("0. quit\n");
        printf("1. print\n");
        printf("2. push\n");
        printf("3. pop\n");
        printf("4. peek\n");
        printf("5. isEmpty\n");
        printf("6. getSize\n");
        printf("7. Reverse Stack\n");
        printf("------------------\n");

        scanf("%d", &sel);
        
        switch (sel)
        {
            case 1:
                print();
                break;
            case 2:
                scanf(" %c", &ch);
                push(ch);
                break;
            case 3:
                pop();
                break;
            case 4:
                peek();
                break;
            case 5:
                if(isEmpty())
                    printf("Stack is Empty!\n");
                else
                    printf("Stack is Not Empty!\n");
                break;
            case 6: 
                getSize();
                break;
            case 7:
                reverse();
                break;
            default:
                return 0; 
        }
    }   
    return 0;
}

void push(char input){
    if(top >= (STACK_SIZE-1)){ //스택이 차면 더이상 삽입 불가능
        printf("Stack is full!");
        return;
    }else{
        stack[++top] = input;
    }
}

void print(void){
    printf("<Stack>:");
    for(int i = 0 ; i <= top; i++){
        printf("%c ", stack[i]);
    }
    printf("\n");
}

char pop(void){
    if(isEmpty()){
        printf("Stack is Empty!\n");
    }else
    printf("pop element: %c\n", stack[top]);
    return stack[top--];//배열로 스택을 구현할때 그냥 커서를 하나 내려줌으로써 위에 있는걸 없는 취급 
}

char peek(void){
    if(isEmpty()){
        printf("Stack is Empty!\n");
    }else{
    printf("Latest element in Stack : %c\n", stack[top]);
    }
    return stack[top];
}

int isEmpty(void){
    if(top == -1){
        return 1; // true 
    }else{
        return 0; // false
    }
}

int getSize(void){
    printf("Stack size: %d\n", top+1);
    return top+1;
}

void reverse(void){
    printf("Reverse Stack:");
    for(int i = top; i >= 0; i--){
        printf("%c ", stack[i]);
    }
    printf("\n");
}