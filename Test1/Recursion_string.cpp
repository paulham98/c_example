#include<iostream>
#include<string>
using namespace std;

/*2���� ���ĺ� a�� b�� ����ؼ� ���̰� 3�� ���ڿ��� ������ �Ʒ��� 8���� ���ɴϴ�.
aaa
aab
aba
abb
baa
bab
bba
bbb
16 ������ ���ڿ��� ���� n�� �־��� �� a�� b�� �̿��Ͽ� ���� n�� ���ڿ��� ����� �������� ����������(�� ���� ó��) �� �ٿ� �ϳ��� ����ϼ���.
 ���ڿ����� �ް�, ��� ȣ�� index 0���� a�϶�,b�϶� �ٽ� ȣ���ؼ� ���ڿ� 1���� a�϶�, b�϶� �ٽ� ȣ���ؼ� ���ڿ� 2�϶� a�϶�, b�϶� 
 ���ڿ��� �ִ�ΰ��� ��� �迭�� �����ϰ� �� 
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
	char arr[2] = { 'a', 'b' }; // a,b �迭
	int n; // �迭 ����
	scanf("%d", &n);
	char* sel = new char[n]; // �迭 �Ҵ� 
	s_combination(arr, sel, n, 0);

	delete[] sel;
}
