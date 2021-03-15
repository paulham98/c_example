#include<iostream>
using namespace std;
void Swap(int &a, int &b){
    int tmp;
    tmp = a;
    a= b;
    b = tmp;
}
void SelectionSort(int *a,int n){
    for(int i = 0; i < n; i++){
        int j =i;
        for(int t = i+1; t < n; t++){
            if(a[t] < a[j]) j = t; 
        }
        Swap(a[i], a[j]);
    }
}
int main(void){
    int a[4]={3,4,2,1};
    SelectionSort(a, 4);
    for(int i = 0; i < 4; i++){
        cout << a[i] << " "<< endl; 
    }

    return 0;
}