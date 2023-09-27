#include <iostream>
#include <time.h>
#include <string>

#include <chrono> 
#include <algorithm>

using namespace std;
//---------------------Функции и Прототипы---------------------------------------

/*
Программа должна выполнять преобразования строки(длина строки 255 символов) :

	СТРОКА ЗАГЛАВНЫМИ БУКВАМИ
	строка в нижнем регистре
	С Заглавной Буквы(Первый Символ Каждого Слова В Строке)
	пЕРВЫЙ сИМВОЛ в нИЖНЕМ рЕГИСТРЕ
	Как в предложении(с заглавной буквы).
	Символ 'f' — выход из программы
	Организовать в программе меню, через которое можно удобно выбирать любое действие.
	Программа должна выполняться пока пользователь не введет  символ 'f'.
	*/

// ЗАГЛАВНАЯ + 32 = нижний регистр


//------------------------MAIN----------------------------------------------------
int main() {
	setlocale(LC_ALL, "RU");
	srand(time(NULL));
	//-------------------------------САМА ПРОГА-------------------------------------

	string str;

	cout << "Введите строку: " << endl;
	//cin >> str;
	getline(cin, str);

	char choice = 'a';

	while (choice != 'f')
	{

		cout << endl << "Выберите один из пунктов меню: " << endl;
		cout << "Преобразование строки в заглавные буквы   -  1" << endl;
		cout << "Преобразование строки в нижний регистр    -  2" << endl;
		cout << "Каждое новое слово с заглавной буквы      -  3" << endl;
		cout << "Каждое новое слово с нижнего регистра     -  4" << endl;
		cout << "Как в обчном предложении                  -  5" << endl;
		cout << "Выход из программы                        -  f" << endl;
		cout << "Сделайте ваш выбор:  ";
		cin >> choice;


		switch (choice)
		{
		case '1':

			transform(str.begin(), str.end(), str.begin(), toupper);
			

			cout << endl << endl << "Преобразованная строка: \n\n" << str << endl;
			
			break;

		case '2':

			transform(str.begin(), str.end(), str.begin(), tolower);

			cout << endl << endl << "Преобразованная строка: \n\n" << str << endl;

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

			cout << endl << endl << "Преобразованная строка: \n\n" << str << endl;

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

			cout << endl << endl << "Преобразованная строка: \n\n" << str << endl;

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

			cout << endl << endl << "Преобразованная строка: \n\n" << str << endl;


			break;

		case 'f':


			break;

		default:
			cout << endl << endl << "Вы ввели некоректные данные , повторите ввод!" << endl;
			break;
		}

		

	}

	system("pause");

	return 0;
}
