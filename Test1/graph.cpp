#include<iostream>
#include<fstream>
#include<string>
#include<stdio.h>
#include "graph.h"
using namespace std;
// adjacency Lists vs matrix       choose
// memory			   time complexity

void Graph:: LoadMatrix(std::string& filename){
    ifstream fin(filename);
    fin >> n;
    matrix = new int* [n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new int[n];
    } // 2차원 배열 생성
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            fin >> vertex;
            matrix[i][j] = vertex;
        }
    }       
    fin.close();
};
void Graph:: PrintMatrix(){
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
    
};
int Graph:: GetSize() {
    ifstream fin("input2.txt");
    fin >> n;
    cout << n << endl;
    return n;
}
void Graph :: PrintShortestPathWeight(int s) {
    int* dist = new int[n];
    for (int i = 0; i < n; i++) {
        dist[i] = matrix[s][i];
        cout << dist[i];
    }
}
int main(void) {
    Graph g;

    string filename;
    getline(cin, filename);

    g.LoadMatrix(filename);
    g.PrintMatrix();
    int n = g.GetSize();
    for (int i = 0; i < n; i++) {
        g.PrintShortestPathWeight(i);
    }
    return 0;
}

