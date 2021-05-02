#include <iostream>
#include <string>
#include <sstream>
#include "list.h"

using namespace std;

void LinkedList:: Append(int data){
    node* new_node = new node;
    size++;
    new_node->data = data;
    new_node->next = nullptr;
    if(head == nullptr){ // 아무것도 없을때
        head = new_node;
        last = new_node;
    }else{
        last->next = new_node;
        last = last->next;
    }
}
void LinkedList:: Prepend(int data){
    node* new_node = new node;
    size++;
    new_node-> data = data;
    if(head == nullptr){
        head = new_node;
        last = new_node;
    }else{
        new_node->next = head;
        head = new_node;
    }
}
int LinkedList:: Length() {
    return size;
    }    // List에 있는 Node의 수를 return
void LinkedList:: Print(){
     node* cur = NULL;
    for(cur = head; cur != NULL; cur = cur-> next ){
            
            cout << cur->data << " ";
    }
    printf("\n");
}


