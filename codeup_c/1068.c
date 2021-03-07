#include<stdio.h>

int main(){
    int a = 63;
    if(a >= 90) printf("%s", "A");
    else if(a >= 70 && a <90) printf("%s", "B");
    else if(a >= 40 && a < 70) printf("%s", "C");
    else if(a >= 0 && a < 40) printf("%s", "D");
}