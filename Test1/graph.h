#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

class Graph{
private:
    int n;
    int vertex;
public:
    void LoadMatrix(std::string& filename);
    void PrintMatrix();
};