//단일 연결 리스트
#include<stdio.h>
#include<stdlib.h>

// 노드 정의
typedef struct node{
    int value;
   struct node* next; //다음 노드를 가리키는 포인터 / 타입지정
    } NODE;// 엘리어스 지정
NODE* start = NULL; // 시작 노드를 가르키는 포인
int value = 1;


void insert(void);
void del(void);
void print(void);
void insert_start(NODE* new_node);
void insert_end(NODE* end, NODE* new_node);
void insert_mid(NODE* mid, NODE* new_node);

int main(void){
    int sel;

    while(1){
        system("clear");
        printf("<MENU>\n");
        printf("0. end\n");
        printf("1. insert\n");
        printf("2. delete\n");
        printf("3. print\n");
        printf("-------------------\n");
        scanf("%d", &sel);


        switch (sel){
        case 0:
            return 0;
        case 1:
            insert();
            break;
        case 2:
            del();
            break;
        case 3:
            print();
            break;
        default:
            printf("잘못된 입력입니다.\n");
        }
    }
    return 0;
}

void print(void){
    NODE* cur = NULL;
    for(cur = start; cur != NULL; cur = cur-> next ){
         // 중간 부분이 다른이유: cur->next가 null이 아닐때까지하면 마지막 노드일때 for문이 실행되지 않음
         // 따라서 cur이 NULL일때 까지 돌려함
            printf("%d -> ", cur->value);
    }
    printf("\n");
    getchar();
}
void del(void){}

void insert(void){
    NODE* cur = NULL; //현재 노드(커서)
    NODE* new_node = NULL; // 새로 생성된 노드     
    if(start == NULL){
        // 제일 처음 생성하는 노드
        new_node = (NODE*)malloc(sizeof(NODE)); // 노드생성
        new_node->next = NULL; // 포인터 초기화
        new_node->value = value++;
        start = new_node; // 시작지점으로 설정
    }else{
        new_node = (NODE*)malloc(sizeof(NODE)); // 노드생성
        new_node->next = NULL;
        new_node->value = value++;
        for(cur = start; cur->next !=NULL; cur = cur->next); // cur노드가 마지막을 가리키게할 때 까지
        insert_end(cur, new_node);
    }   
}
//마지막 지점 삽입 함수
void insert_end(NODE* end, NODE* new_node){  
    end -> next = new_node;
}
//시작 지점 삽입 함수
void insert_start(NODE* new_node){
    
}
//중간 지점 삽입 함수
void insert_mid(NODE* mid, NODE* new_node){
    
}
