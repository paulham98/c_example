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
}
void Graph:: PrintMatrix(){
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
    
}
int Graph:: GetSize() {
    
    //cout << n << endl;
    return n;
}
int Graph:: smallIndex(){
    int min = 999;
    int id = 0;
    for(int i = 0; i < n; i++){
        if(dist[i] < min && check[i] == false){ // 시작점에서 가중치가 가장 작은 노드 검색
            min = dist[i];  
            id = i;
        }
    }
    return id;
}
void Graph :: PrintShortestPathWeight(int s) {
   for (int i = 0; i < n; i++) {
       dist[i] = matrix[s][i];// 시작점 가중치 초기화
       check[i] = false;
    }
    check[s] = true;
    for(int i = 0; i < n; i++){
        int cur = smallIndex();
        check[cur] = true;
        cout << s << " ";
        for(int j =0; j < n; j++){
            if(check[j] == false){
                if(dist[cur] + matrix[cur][j] < dist[j]){
                    dist[j] = dist[cur] + matrix[cur][j];
                    
                    cout <<j << " " << endl;
                }
            }
        }
    }
    /*
    for (int i = 0; i < n; i++) {
        cout << dist[i] << endl;
    }
    */
}
void Graph::PrintShortestPath(int s) {
    //bellman 알고리즘 사용해야 할듯
    for (int i = 0; i < n; i++) {
        dist[i] = matrix[s][i];// 시작점 가중치 초기화
    }
    for (int i = 0; i < n; i++) {
        
    }
};
int main(void) {
    Graph g;

    string filename;
    getline(cin, filename);

    g.LoadMatrix(filename);
    //g.PrintShortestPath(0);
    g.PrintShortestPathWeight(0);
    return 0;
}



