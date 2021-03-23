//1. 역순 문자열 만들기
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
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
    char str[100];
    printf("수식을 입력하세요");
    scanf("%s", str);
    char ch;
    int len = strlen(str);
    for(int i =0; i < len; i++){
        if(str[i] == '(' || str[i] == '{' || str[i] == '[')
            push(str[i]);
        else if(str[i] == ')'){
            if(isEmpty()){
                printf("괄호가 맞지않습니다.\n");
                return -1;
            }
            ch = pop();
            if(ch != '('){
                printf("괄호가 맞지 않습니다.\n");
                return -1;
            }
        }
        else if(str[i] == '}'){
            if(isEmpty()){
                printf("괄호가 맞지않습니다.\n");
                return -1;
            }
            ch = pop();
        }
    }
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