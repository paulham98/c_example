#include<stdio.h>
#include<iostream>
using namespace std;

class node{
public:
    int data;
    node* next = nullptr;
};
class LinkedList{
private:
    node* head;
    node* last;
    int size = 0;
public:
void Append(int data);
void Prepend(int data);
int Length();    
void Print();
};
