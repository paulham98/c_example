#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include "graph.h"
#include<stack>
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
    dist = new int[n];
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
    
    
    return n;
}
int Graph:: smallIndex(){
    int min = 999;
    int id = 0;
    for(int i = 0; i < n; i++){
        if(dist[i] < min && check[i] == false){ // 시작점에서 가중치가 가장 작은 노드 검색
            min = dist[i];  
            id = i;
           // cout << id << " ";
        }
    }
    return id;
}
void Graph :: PrintShortestPathWeight(int s) {
    check = new bool[n];
    
   for (int i = 0; i < n; i++) {
       dist[i] = matrix[s][i];// 시작점 가중치 초기화
       check[i] = false;
       //path[i] = matrix[s][i];
    }
    check[s] = true;
    for(int i = 0; i < n; i++){
        int cur = smallIndex();
        check[cur] = true;
        //path[s] = dist[s];// 시작점은 자기 자신의 weight값 저장
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


void Graph::PrintShortestPath(int s) {
    /*
   for(int p = 0; p < n-1; p++){
       q.push(s);
        bool update  = 1;
        int a =0;
        while(update){ //두번 돌아
            update = 0;
            for(int i = 0; i < n; i++){
                for(int j =0; j < n; j++){
                    if(dist[j] > dist[i] + matrix[i][j]){
                        dist[j] = dist[i] + matrix[i][j];
                        q.push(i);
                        update = 1;
                    }
                }
            }
           
            
        }
         q.push(p+1);
        while(!q.empty()){
            cout << q.front() << " ";
            q.pop();
        }cout << endl;
   }
   
    for(int i = 0 ; i< n; i++){
        cout << dist[i] << " ";
    }

*/
vector<int> v(n);
 check = new bool[n];
    path = new int[n];
    int p;
    for (int i = 0; i < n; i++) {
       dist[i] = matrix[s][i];// 시작점 가중치 초기화
       check[i] = false;
       
    }
    int* index = new int[n];
    check[s] = true;
    for(int i = 0; i < n; i++){
        int cur = smallIndex();
        check[cur] = true;
        for(int j =0; j < n; j++){
            if(check[j] == false){
                if(dist[cur] + matrix[cur][j] < dist[j]){
                    dist[j] = dist[cur] + matrix[cur][j];
                    v[j] = cur;
                }
            }
        }
    }

stack<int> stk;

    for(int i = 0; i < n; i++){
        if(i == s) continue;
        cout << s << " ";
        p = i;
        while(v[p] != 0){
            //cout << v[p] << " ";
            stk.push(v[p]);
            p = v[p];
        }
        while(!stk.empty()){
            int a = stk.top();
            stk.pop();
            cout << a << " ";
        }
        printf("%d", i);
        cout << endl;
        
    }
};

int main(void) {
    Graph g;
    
    string filename;
    getline(cin, filename);
    
    g.LoadMatrix(filename);
    int n = g.GetSize();
    for (int i = 0; i < n; i++) {
        g.PrintShortestPathWeight(i);
    }
    return 0;
}


