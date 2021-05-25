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
int Graph:: smallIndex(){
    int min = 999;
    int id = 0;
    int* dist = new int[n]; // 각각 vertex들의 최단거리
    bool* check = new bool[n]; // 방문한 vertex 확인
    for(int i = 0; i < n; i++){
        if(dist[i] < min && !check[i]){ // 시작점에서 가중치가 가장 작은 노드 검색 0 1 4 2
            min = dist[i];  
            id = i;
        }
    }
    return id;
}
void Graph :: PrintShortestPathWeight(int s) {
   for (int i = 0; i < n; i++) {
        dist[i] = matrix[s][i]; // 시작점 가중치
        // cout << dist[i] << " ";
    }
    check[s] = true;
    for(int i = 0; i < n; i++){
        int cur = smallIndex();
        cout << smallIndex();
        check[cur] = true;
        for(int j =0; j < n; j++){
            if(!check[j]){
                if(dist[cur] + matrix[cur][j] < dist[j]){
                    dist[j] = dist[cur] + matrix[cur][j];
                }
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << dist[i] << " ";
    } cout << "\n" << endl;
}
int main(void) {
    Graph g;

    string filename;
    getline(cin, filename);

    g.LoadMatrix(filename);
    g.PrintMatrix();
    int n = g.GetSize();
    // for (int i = 0; i < n; i++) {
    //     g.PrintShortestPathWeight(i);
    // }
    g.PrintShortestPathWeight(0);
    // g.PrintShortestPathWeight(1);
    return 0;
}

