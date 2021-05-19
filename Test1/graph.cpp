#include<iostream>
#include<string>
#include<stdio.h>
#include "graph.h"
using namespace std;
// adjacency Lists vs matrix       choose
// memory			   time complexity

void Graph:: LoadMatrix(std::string& filename){
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d ", &vertex);
            vertex = *(matrix+j);
        }
    }
};
void Graph:: PrintMatrix(){
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d", *(matrix+j));
        }
        printf("\n");
    }
};
/*
int main(void) {
    Graph g;
    
    string filename;
    getline(cin, filename);
    
    g.LoadMatrix(filename);
    g.PrintMatrix();
    
    return 0;
}
*/