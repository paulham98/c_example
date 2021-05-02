#include<iostream>
#include<string>
using namespace std;

/*2개의 알파벳 a와 b를 사용해서 길이가 3인 문자열을 만들어보면 아래의 8개가 나옵니다.
aaa
aab
aba
abb
baa
bab
bba
bbb
16 이하의 문자열의 길이 n이 주어질 때 a와 b를 이용하여 길이 n의 문자열을 만드는 가지수를 사전순으로(위 예제 처럼) 한 줄에 하나씩 출력하세요.
 문자열길이 받고, 재귀 호출 index 0에서 a일때,b일때 다시 호출해서 문자열 1에서 a일때, b일때 다시 호출해서 문자열 2일때 a일때, b일때 
 문자열이 최대로가면 당시 배열을 리턴하고 끝 
*/


void s_combination(char* arr, char* sel, int n, int cnt) {
	if (cnt == n) {
		for (int i = 0; i < n; i++) {
			cout << sel[i] << " ";
		}
		cout << endl;
		return;
	}
	for (int i = 0; i < 2; i++) {
		sel[cnt] = arr[i];
		s_combination(arr, sel, n, cnt + 1);
	}
	

}

int main() {
	char arr[2] = { 'a', 'b' }; // a,b 배열
	int n; // 배열 길이
	scanf("%d", &n);
	char* sel = new char[n]; // 배열 할당 
	s_combination(arr, sel, n, 0);

	delete[] sel;
}
