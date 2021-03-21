
/* 스택 구현 
기능 ; push, pop, peek, del, isEmpty, getSize, print
1. 역순 문자열 만들기
2. 수식의 괄호검사
3. 수식의 후위 표기법 변환
4. 후위 표기 수식의 연산
*/
#include<stdio.h>

#define STACK_SIZE 100

void push(char input);
void print(void);

char stack[STACK_SIZE];
int top = -1;

int main(){
    return 0;
}

void push(char input){
    if(top >= (STACK_SIZE-1)){ //스택이 차면 더이상 삽입 불가능
        printf("Stack is full!");
        return;
    }   
    stack[top++] = input;
}
void print(void){
    for(int i = 0 ; i < top; i++){
        printf("%d", stack[i]);
    }
}
char pop(void){
    return stack[top--];//배열로 스택을 구현할때 그냥 커서를 하나 내려줌으로써 위에 있는걸 없는 취급 