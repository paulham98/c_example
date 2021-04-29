#include<iostream>
#include<stdio.h>
// 배열의 길이, 오름차순 배열, 찾고자 하는 숫자
//출력은 배열이 있으면, 인덱스 정보, 이진 탐색을 몇번하는지
// 찾는 숫자가 없어도 코드의 실행 횟수를 출력해야함
// 재귀 함수는 구현 했고, 이제 횟수 정해주는 것만 해주면 됨

int b_Search(int *arr, int start, int end,int m, int t){
    if(start > end){ 
        printf("-1\n");
        printf("%d", t);
        return -1;
    }  // 종료조건
    int mid = (start+end) / 2;
    if(arr[mid] == m){ 
        t++;
        printf("%d\n", mid);
        printf("%d", t);
        return mid; 
    } // 찾았을 때
    else if(arr[mid] < m){
        return b_Search(arr, mid+1, end, m, ++t);   
    }
        return b_Search(arr, start, mid-1, m, ++t);
}


int main(){
    int n,m; // 배열의 길이, 찾고자하는 숫자
    
    scanf("%d", &n); // 길이 입력 받고
    int* arr = new int[n]; // 배열
    for(int i = 0; i < n; i++){ // 배열 입력 받고
        scanf("%d ", &arr[i]);
    }
    scanf("%d", &m); // 찾고자하는 숫자 입력받고
    b_Search(arr, 0, n-1, m, 0);

    delete[] arr;
    return 0;
}
