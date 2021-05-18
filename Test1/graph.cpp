#include<iostream>
#include<string>
#include<stdio.h>
#include "graph.h"
using namespace std;
// adjacency Lists vs matrix       choose
// memory			   time complexity

void Graph:: LoadMatrix(std::string&filename){
    int n;
    scanf("%d", &n);
    int vertex;
    int matrix[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d ", &vertex);
            vertex = matrix[i][j];
        }
    }
};

// int main(void) {
//     Graph g;
    
//     string filename;
//     getline(cin, filename);
    
//     g.LoadMatrix(filename);
//     g.PrintMatrix();
    
//     return 0;
// }
