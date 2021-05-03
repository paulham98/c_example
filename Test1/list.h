#include<stdio.h>
#include<iostream>
using namespace std;

class node{
public:
    int data;
    node* next;
    node* prev;
};
class LinkedList{
private:
    node* head;
    node* tail;
    int size = 0;
public:
void Append(int data);
void Prepend(int data);
int Length();    
void Print();
void PrintReverse();
};
