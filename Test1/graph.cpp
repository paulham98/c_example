#include<iostream>
#include<string>
#include<stdio.h>
#include "graph.h"
using namespace std;
// adjacency Lists vs matrix       choose
// memory			   time complexity

void Graph:: LoadMatrix(std::string& filename){
    cin >> n;
    matrix = new int* [n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new int[n];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%p ", &vertex);
            vertex = *(matrix+j);
        }
    }
};
void Graph:: PrintMatrix(){
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%p", *(matrix+j));
        }
        printf("\n");
    }
    for (int i = 0; i < n; i++) {
        delete matrix[i];
    }
};
