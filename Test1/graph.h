#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;


class Graph{
private:
    
public:
    int n;
    int vertex;
    int** matrix = nullptr;
    ~Graph() {
        for (int i = 0; i < n; i++) {
            delete[] matrix[i];
        }
        delete[] matrix;
    }
    void LoadMatrix(std::string& filename);
    void PrintMatrix();
};