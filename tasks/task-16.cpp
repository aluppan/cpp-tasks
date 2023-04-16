#include <iostream>
#include <locale.h>

using namespace std;

void clr()
{
	for (int i = 0; i < 50; i++)
	{
		cout << endl;
	}
}

void print_board(int arr[3][3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			switch (arr[i][j])
			{
			case 0: cout << "   ";
				break;
			case 1: cout << " X ";
				break;
			case 2: cout << " O ";
				break;
			default:
				break;
			}
			if (i == 0 && j == 2 || i == 1 && j == 2)
			{
				cout << endl << "___________" << endl;
			}
			else if (i == 2 && j == 2)
			{
				cout << endl;
			}
			else
			{
				cout << "|";
			}
		}
	}
}

void test(int arr[3][3], int i)
{
	if (arr[0][0] == arr[0][1] &&
		arr[0][0] == arr[0][2] &&
		arr[0][0] != 0 ||
		arr[1][0] == arr[1][1] &&
		arr[1][0] == arr[1][2] &&
		arr[1][0] != 0 ||
		arr[2][0] == arr[2][1] &&
		arr[2][0] == arr[2][2] &&
		arr[2][0] != 0 ||
		arr[0][0] == arr[1][0] &&
		arr[0][0] == arr[2][0] &&
		arr[0][0] != 0 ||
		arr[0][1] == arr[1][1] &&
		arr[0][1] == arr[2][1] &&
		arr[0][1] != 0 ||
		arr[0][2] == arr[1][2] &&
		arr[0][2] == arr[2][2] &&
		arr[0][2] != 0 ||
		arr[0][0] == arr[1][1] &&
		arr[0][0] == arr[2][2] &&
		arr[0][0] != 0 ||
		arr[0][2] == arr[1][1] &&
		arr[0][2] == arr[2][0] &&
		arr[0][2] != 0)
	{
		if (i % 2 == 0)
		{
			cout << "Игру выиграл пользователь - X" << endl;
			exit(1);
		}
		else if (i % 2 == 1)
		{
			cout << "Игру выиграл пользователь - O" << endl;
			exit(1);
		}
	}
}

int check_board(int arr[3][3], int i)
{
	int n, m, to;
	do
	{
		cout << endl << "Подсказка:" << endl;
		cout << " 0 | 1 | 2 " << endl;
		//cout << "___________" << endl;
		cout << "-----------" << endl;
		cout << " 0 | 1 | 2 " << endl;
		cout << "-----------" << endl;
		cout << " 0 | 1 | 2 " << endl;
		cout << "Введите диагональ от 0 до 2: ";
		cin >> n;
		cout << "Введите вертикаль от 0 до 2: ";
		cin >> m;
		if (n < 0 || n > 2 || m < 0 || m > 3)
		{
			cout << "Неправильный ввод!" << endl;
			to = 0;
		}
		else
		{
			to = 1;
		}
	} while (to != 1);
	if (i % 2 == 0)
	{
		arr[n][m] = 1;
	}
	else
	{
		arr[n][m] = 2;
	}
	return arr[3][3];
}

int main()
{
	setlocale(LC_ALL, "ru");
	int arr[3][3]{ {0,0,0}, {0,0,0} };
	for (int i = 0; i < 9; i++)
	{
		clr();
		print_board(arr);
		test(arr, i - 1);
		arr[3][3] = check_board(arr, i);
	}
	print_board(arr);
}
