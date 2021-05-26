#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;


class Graph{
private:
    int n;
    int vertex;
    int** matrix;
    int* dist = new int[n];// 각각 vertex들의 최단거리  
    bool* check = new bool[n];// 방문한 vertex 확인
    int* way = new int[n];
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
    int min();
};