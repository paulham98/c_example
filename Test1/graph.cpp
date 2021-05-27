#include<iostream>
#include<fstream>
#include<string>
#include<stdio.h>
#include "graph.h"
#include<queue>
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
            cout << id;
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
        for(int j =0; j < n; j++){
            if(check[j] == false){
                if(dist[cur] + matrix[cur][j] < dist[j]){
                    dist[j] = dist[cur] + matrix[cur][j];
                             
                }
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        cout << dist[i] << endl;
    }
    
}
int Graph::min() {
    return 0;
}

void Graph::PrintShortestPath(int s) {
    queue<int> q;
    //bellman 알고리즘 사용해야 할듯
    // 생각해봐야 할 점:각각의 루트를 way에 넣어서 마지막에 프린트
    for (int i = 0; i < n; i++) {
        dist[i] = matrix[s][i];// 시작점 가중치 초기화
    }
    int k = 0;
    
    // Dist[i]가 총 n-1만큼 돌고, 한번 돌때마다 dist[j]는
    // j=i-1로 matrix[i][j]와 더해서 dist[i]와 비교
    /*
    for (int i = 0; i < n-1; i++) {
       
        for (int j = 0; j < n; j++) {
            
            for (int u = 0; u < n; u++) {
                if (dist[j] > dist[u] + matrix[u][j]) {
                    dist[j] = dist[u] + matrix[u][j];
               
                 //   cout << u << " " << j << " " << endl;
                    if (j != 0) {
                        q.push(s);
                        q.push(u);
                        q.push(j);
                    }
                    
                }
                else{
                    q.push(s);
                    q.push(u);
                }
            }
            while (!q.empty()) {
                cout << q.front() << " ";
                q.pop();
            }
        }

    }
    */
    for (int i = 0; i < n; i++) {
        q.push(s);
        for (int j = 0; j < n; i++) {
            for (int k = 0; k < n; k++) {
                if (dist[k] > dist[j] + matrix[j][k]) {
                    dist[k] = dist[j] + matrix[j][k];
                    q.push(k);
                }
            }
        }
        q.push(i+1);
        while (!q.empty()) {
            cout << q.front() << " ";
            q.pop();
        }
    }
    /*
   bool update  = 1;
   while(update){
       update = 0;
      
       for(int i = 0; i < n; i++){
           for(int j =0; j < n; j++){
               if(dist[j] > dist[i] + matrix[i][j]){
                   dist[j] = dist[i] + matrix[i][j];
                   cout << i << " ";
                   cout << j << " " << endl;
                   update = 1;
               }
           }
           
           while (!q.empty()) {
               cout << q.front() << " ";
               q.pop();
           }
       }
   }
   */
   
    /*
    for(int i = 0 ; i< n; i++){
        cout << dist[i] << " ";
    }*/
    
};
int main(void) {
    Graph g;

    string filename;
    getline(cin, filename);

    g.LoadMatrix(filename);
    g.PrintShortestPath(0);
    //g.PrintShortestPathWeight(0);
    return 0;
}



