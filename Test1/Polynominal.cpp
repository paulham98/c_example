#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
class Polynomial;
class Term;

int main(){
    // a(x) = 3x^2+2x-4, b(x)= x^8-10x^5-3x^3=1

}


class Polynomial{
private:
    Term* termArray; // 0이 아닌 항의 배열
    int capacity; // termArray의 크기
    int terms; //0이 아닌 항의 수
public:
    void NewTerm(const float theCoeff, const int theExp){
        if(terms == capacity){ 
            // 할당된 배열과 항의 개수가 꽉차면 배열의 크기를 두배로 늘려줌
            capacity *= 2;
            Term* temp = new Term[capacity]; // 새로운 배열
            copy(termArray, (termArray+terms), temp);
            delete [ ] termArray;
            termArray = temp;
        }
    }
};
class Polynomial{

};
class Term{
    friend Polynomial;
    private:
    float coef; // 계수
    int exp; // 지구
};

