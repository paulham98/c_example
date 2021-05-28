#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;


class Graph{
private:
    int n;
    int vertex;
    int** matrix;
    int* dist;// 각각 vertex들의 최단거리  
    bool* check;// 방문한 vertex 확인
    int* path;
public:
   
    ~Graph() {
        for (int i = 0; i < n; i++) {
            delete[] matrix[i];
        }
        delete[] matrix;
    }
    
    void LoadMatrix(std::string& filename);
    void PrintMatrix();
    int GetSize();
    void PrintShortestPathWeight(int s);
    int smallIndex();
    void PrintShortestPath(int s);
};