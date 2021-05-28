#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;


class Graph{
private:
    int n;
    int vertex;
    int** matrix;
    int* dist;// ���� vertex���� �ִܰŸ�  
    bool* check;// �湮�� vertex Ȯ��
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