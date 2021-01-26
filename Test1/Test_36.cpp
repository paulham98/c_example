#include<iostream>
#include<string>
using namespace std;
void main() {
	/*
  // cin
  // cout
  cout << "확인" << endl;

  int i;
  double d;

  cout << "i입력: ";
  cin >> i;

  cout << "d입력: ";
  cin >> d;

  cout << i << ", " << d << endl;
  

  // 확장된 구조체
  // 객체

	string str1 = "kim";
	string str2;
	str2 = "lee";

	cout << "문자열입력: ";
	cin >> str1;
	//getline(cin, str1);
	cout << str1 << endl;


	
	cout << "str1의 크기는 " << str1.size() << "입니다." << endl;
	str1.insert(0, "test");
	cout << "변경된 str1은 " << str1 << "입니다." << endl;
	str1.append("kiwi");
	cout << "변경된 str1은 " << str1 << "입니다." << endl;
	str1 += str2;

	cout << "변경된 str1은 " << str1 << "입니다." << endl;
	cout << "str2은 " << str2 << "입니다." << endl;
	*/

	string str[5];
    int index = -1;

    int act;
    cout << "메뉴등록프로그램" << endl;
    while (1) {
        cout << "1.등록 2.수정 3.목록출력 4.종료" << endl;
        cout << "입력: ";
        cin >> act;
        if (act == 1) {
            cout << "메뉴이름등록: ";
            cin >> str[++index];
            cout << str[index] << ", 등록완료!" << endl;
        }
        else if (act == 2) {
            int num;
            do {
                cout << "변경할메뉴번호: ";
                cin >> num;
            } while (num < 1 || index < num); // ☆
            cout << "메뉴: " << str[num - 1] << endl;
            cout << "변경할메뉴이름: ";
            cin >> str[num - 1];
            cout << "변경완료!" << endl;
        }
        else if (act == 3) {
            cout << "목록" << endl;
            for(int i = 0; i <= index; i++) {
                cout << (i+1) << "." << str[i] << endl;
            }
        }
        else if (act == 4) {
            break;
        }
        else {
            cout << "잘못된 번호입니다!" << endl;
            break;
        }
    }

	/*
	char str3[10];
	cin.getline(str3, 10);
	*/

}