#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

class Graph{
private:
    int n;
    int *vertex;
    int** matrix;
public:
    void LoadMatrix(std::string& filename);
    void PrintMatrix();
};