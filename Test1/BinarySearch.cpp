#include<iostream>
using namespace std;

int BinarySearch(int * a, const int x,const int left, const int right){
    if(left <= right){
        int middle = (left + right) /2;
        cout << middle << endl;
        if(x < a[middle] ) return BinarySearch(a, x, left, middle-1);
        else if( x > a[middle]) return BinarySearch(a, x, middle+1, right);
        return middle;// 값이 나오면 호출되었던 모든 함수들이 return값을 반환하면서 함수 끝
    }
    
    return -1;//not found
}
int main(){
    int a[10]= {1,2,3,4,5,6,7,8,9,10};
    int x = 8;
    BinarySearch(a,x,0,9);
    return 0;
}