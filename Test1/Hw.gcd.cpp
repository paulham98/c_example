#include<iostream>
using namespace std;

int gcd(int a, int b){
    int r = a % b;
    if(r == 0){
        return b;
    }else{
        return gcd(b, r);
    }
}
int main(){
    cout << gcd(8, 5) << endl;
}

