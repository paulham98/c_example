//단일 연결 리스트
#include<stdio.h>
#include<stdlib.h>

// 노드 정의
typedef struct node{
    int id;
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
void free_all(void);
void delete_start(void);
void delete_mid(NODE* pre_del);
void delete_end(NODE* pre_del);


int main(void){
    int sel;

    while(1){
        //system("clear");
        printf("<MENU>\n");
        printf("-1. clear\n");
        printf("0. end\n");
        printf("1. insert\n");
        printf("2. delete\n");
        printf("3. print\n");
        printf("-------------------\n");
        scanf("%d", &sel);


        switch (sel){
        case -1:
            system("clear");
            break;
        case 0:
            free_all();
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
}
void del(void){
    int sel, id;
    NODE* cur;

    if(start == NULL) return;
    else if(start->next == NULL){// 노드가 한개있을떄
        free(start);
        start = NULL;
        return;
    }else if (start->next->next ==NULL) {//노드가 두개 있을때
        printf("1. 시작지점 delete\n");
        printf("2. 마지막지점 delete\n");
        printf("======================\n");
        scanf("%d", &sel);

        if(sel >= 3){
            printf("잘못된 입력입니다.");
            return;
        }
    }else { //노드가 3개 이상 있음
        printf("1. 시작 지점 delete\n");
        printf("2. 마지막 지점 delete\n");
        printf("3. 중간 지점 delete\n");
        printf("=======================\n");
        scanf("%d", &sel);
        
        if(sel > 3){
            printf("잘못된 입력입니다.\n");
            return;
        }
    }

    if(sel == 1)
    {
        delete_start();
    }else if(sel == 2){
        // 현재노드를 마지막노드 전 노드를 가르키게 함
        for(cur =start; cur->next->next !=NULL; cur = cur->next );
        delete_end(cur);
    }else if(sel == 3){
        print();
        printf("delete를 할 노드 id를 입력하세요: ");
        scanf("%d", &id);
        for(cur =start; cur !=NULL; cur = cur->next ){
            if(cur->next->id ==id) // 삭제할 노드의 전 노드로 이동
            break;
        }
        
        delete_mid(cur);

    }else {
        //잘못된 입력
        
        printf("잘못된 입력입니다.\n");
        return;
    }
}

//시작지점 delete 함수
void delete_start(void){
    NODE* tmp;

    tmp= start->next;
    free(start);
    start = tmp;
}
// 마지막 지점 delete 함수
void delete_end(NODE* pre_del){
    free(pre_del->next);
    pre_del->next = NULL;
}
// 중간 지점 delete 함수
void delete_mid(NODE* pre_del){
    
    NODE* del;
    del = pre_del->next; // 삭제할 노드
    pre_del->next = del->next; // 삭제 노드의 이전 노드와 삭제 노드의 다음 노드를 이어줌
    free(del);
}

void free_all(void){
    NODE* cur;
    NODE* del = start;
    if(start == NULL){
        return;
    }else if( start->next == NULL){
        free(start);
    }else{
        for(cur = start->next; cur != NULL; cur = cur->next){
            free(del);
            del = cur;
        }
        free(del);
    }
    start = NULL;
} 


void insert(void){
    NODE* cur = NULL; //현재 노드(커서)
    NODE* new_node = NULL; // 새로 생성된 노드     
    int sel, id;
    if(start == NULL){
        // 제일 처음 생성하는 노드
        new_node = (NODE*)malloc(sizeof(NODE)); // 노드생성
        new_node->next = NULL; // 포인터 초기화
        new_node->value = value++;
        start = new_node; // 시작지점으로 설정
    }else{
        printf("1. 시작지점 insert\n");
        printf("2. 증간지점 insert\n");
        printf("3. 마지막지점 insert\n");
        printf("======================\n");
        scanf("%d", &sel);

        new_node = (NODE*)malloc(sizeof(NODE)); // 노드생성
        new_node->next = NULL;
        new_node->value = value++;

        if( sel == 1){ // 시작지점
            insert_start(new_node);
        }else if( sel == 2){ // 중간 지점
            printf("어떤 노드 뒤에 insert할지 노드의 위치를 지정해주세요: ");
            scanf("%d", &id);
            for(cur = start; cur->next !=NULL; cur = cur->next){
                if(cur-> id == id){
                    break;
                }
            } // cur노드가 마지막을 가리키게할 때 까지
            insert_mid(cur, new_node);
        }else if( sel == 3){
            for(cur = start; cur->next !=NULL; cur = cur->next);
            insert_end(cur, new_node);
        }else{
            free(new_node);
            return ;
        }
        
    }   
}
//마지막 지점 삽입 함수
void insert_end(NODE* end, NODE* new_node){  
    end -> next = new_node;
}
//시작 지점 삽입 함수
void insert_start(NODE* new_node){
    new_node-> next = start;
    start = new_node; //시작 노드 갱신
}
//중간 지점 삽입 함수
void insert_mid(NODE* mid, NODE* new_node){
    new_node->next = mid->next;
    mid->next = new_node;
}
