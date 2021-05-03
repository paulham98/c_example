#include <iostream>
#include <string>
#include <sstream>
#include "list.h"

using namespace std;

void LinkedList:: Append(int data){
    node* new_node = new node;
    size++;
    new_node->data = data;
    new_node->next = NULL;
    new_node->prev = NULL;
    if(head == NULL){ // 아무것도 없을때
        head = new_node;
        tail = new_node;
    }else{
        new_node->prev = tail;
        tail->next = new_node;
        tail = tail->next;
    }
}
void LinkedList:: Prepend(int data){
    node* new_node = new node;
    size++;
    new_node-> data = data;
    if(head == NULL){
        head = new_node;
        tail = new_node;
    }else{
        new_node->prev = NULL;
        new_node->next = head;
        head->prev = new_node;
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
void LinkedList:: PrintReverse(){
    node* cur = NULL;
    for(cur = tail; cur!= NULL; cur = cur->prev){
        cout << cur->data<< " ";
    }
    printf("\n");
}
// int main(void) {
//     LinkedList list;
    
//     string numbers;
//     int number;
//     getline(cin, numbers);
    
//     istringstream is(numbers);
//     while (is >> number) {
//         if (number % 2)
//             list.Append(number);
//         else
//             list.Prepend(number);
//     }
    
//     list.PrintReverse();
//     cout << list.Length() << endl;
    
//     return 0;
// }