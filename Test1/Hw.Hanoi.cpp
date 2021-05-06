#include<iostream>
using namespace std;

void Hanoi(int n, char from, char by, char to) {
	/*	
		int n : 이동할 원반의 숫자
		char from : 이동할 원반이 있는 출발지 탑
		char by : 원반을 이동하는 과정에서 거쳐가는 탑
		char to : 원반을 이동할 목적지 탑
	*/
	if(n == 1){
		cout << from << " => " << to << endl;
	}else{
		Hanoi(n-1, from, to, by);
		cout << from << " => " << to << endl;
		Hanoi(n-1, by, from, to);
	}
}
int main(){
	Hanoi(3, 'A', 'B', 'C');
}