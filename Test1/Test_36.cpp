#include<iostream>
#include<string>
using namespace std;
void main() {
	/*
  // cin
  // cout
  cout << "Ȯ��" << endl;

  int i;
  double d;

  cout << "i�Է�: ";
  cin >> i;

  cout << "d�Է�: ";
  cin >> d;

  cout << i << ", " << d << endl;
  

  // Ȯ��� ����ü
  // ��ü

	string str1 = "kim";
	string str2;
	str2 = "lee";

	cout << "���ڿ��Է�: ";
	cin >> str1;
	//getline(cin, str1);
	cout << str1 << endl;


	
	cout << "str1�� ũ��� " << str1.size() << "�Դϴ�." << endl;
	str1.insert(0, "test");
	cout << "����� str1�� " << str1 << "�Դϴ�." << endl;
	str1.append("kiwi");
	cout << "����� str1�� " << str1 << "�Դϴ�." << endl;
	str1 += str2;

	cout << "����� str1�� " << str1 << "�Դϴ�." << endl;
	cout << "str2�� " << str2 << "�Դϴ�." << endl;
	*/

	string str[5];
    int index = -1;

    int act;
    cout << "�޴�������α׷�" << endl;
    while (1) {
        cout << "1.��� 2.���� 3.������ 4.����" << endl;
        cout << "�Է�: ";
        cin >> act;
        if (act == 1) {
            cout << "�޴��̸����: ";
            cin >> str[++index];
            cout << str[index] << ", ��ϿϷ�!" << endl;
        }
        else if (act == 2) {
            int num;
            do {
                cout << "�����Ҹ޴���ȣ: ";
                cin >> num;
            } while (num < 1 || index < num); // ��
            cout << "�޴�: " << str[num - 1] << endl;
            cout << "�����Ҹ޴��̸�: ";
            cin >> str[num - 1];
            cout << "����Ϸ�!" << endl;
        }
        else if (act == 3) {
            cout << "���" << endl;
            for(int i = 0; i <= index; i++) {
                cout << (i+1) << "." << str[i] << endl;
            }
        }
        else if (act == 4) {
            break;
        }
        else {
            cout << "�߸��� ��ȣ�Դϴ�!" << endl;
            break;
        }
    }

	/*
	char str3[10];
	cin.getline(str3, 10);
	*/

}