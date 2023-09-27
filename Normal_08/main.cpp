#include <iostream>
#include <time.h>
#include <string>

#include <chrono> 
#include <algorithm>

using namespace std;
//---------------------������� � ���������---------------------------------------

/*
��������� ������ ��������� �������������� ������(����� ������ 255 ��������) :

	������ ���������� �������
	������ � ������ ��������
	� ��������� �����(������ ������ ������� ����� � ������)
	������ ������ � ������ ��������
	��� � �����������(� ��������� �����).
	������ 'f' � ����� �� ���������
	������������ � ��������� ����, ����� ������� ����� ������ �������� ����� ��������.
	��������� ������ ����������� ���� ������������ �� ������  ������ 'f'.
	*/

// ��������� + 32 = ������ �������


//------------------------MAIN----------------------------------------------------
int main() {
	setlocale(LC_ALL, "RU");
	srand(time(NULL));
	//-------------------------------���� �����-------------------------------------

	string str;

	cout << "������� ������: " << endl;
	//cin >> str;
	getline(cin, str);

	char choice = 'a';

	while (choice != 'f')
	{

		cout << endl << "�������� ���� �� ������� ����: " << endl;
		cout << "�������������� ������ � ��������� �����   -  1" << endl;
		cout << "�������������� ������ � ������ �������    -  2" << endl;
		cout << "������ ����� ����� � ��������� �����      -  3" << endl;
		cout << "������ ����� ����� � ������� ��������     -  4" << endl;
		cout << "��� � ������ �����������                  -  5" << endl;
		cout << "����� �� ���������                        -  f" << endl;
		cout << "�������� ��� �����:  ";
		cin >> choice;


		switch (choice)
		{
		case '1':

			transform(str.begin(), str.end(), str.begin(), toupper);
			

			cout << endl << endl << "��������������� ������: \n\n" << str << endl;
			
			break;

		case '2':

			transform(str.begin(), str.end(), str.begin(), tolower);

			cout << endl << endl << "��������������� ������: \n\n" << str << endl;

			break;

		case '3':

			transform(str.begin(), str.end(), str.begin(), tolower);

			for (int i = 0; i < str.size(); i++)
			{
				if (i == 0)
				{
					str[i] -= 32;
				}
				if (str[i] == ' ')
				{
					str[i + 1] -= 32;
				}
			}

			cout << endl << endl << "��������������� ������: \n\n" << str << endl;

			break;

		case '4':

			transform(str.begin(), str.end(), str.begin(), toupper);

			for (int i = 0; i < str.size(); i++)
			{
				if (i == 0)
				{
					str[i] += 32;
				}
				if (str[i] == ' ')
				{
					str[i + 1] += 32;
				}
			}

			cout << endl << endl << "��������������� ������: \n\n" << str << endl;

			break;

		case '5':

			transform(str.begin(), str.end(), str.begin(), tolower);

			for (int i = 0; i < str.size(); i++)
			{
				if (i == 0)
				{
					str[i] -= 32;
				}
				if (str[i] == '.'  || str[i] == '!')
				{
					if (i + 2 <= str.size())
					{
						str[i + 2] -= 32;
					}
				}
			}

			cout << endl << endl << "��������������� ������: \n\n" << str << endl;


			break;

		case 'f':


			break;

		default:
			cout << endl << endl << "�� ����� ����������� ������ , ��������� ����!" << endl;
			break;
		}

		

	}

	system("pause");

	return 0;
}
