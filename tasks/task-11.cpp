#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	{
		cout << "Задание 1" << endl;
		constexpr unsigned int size1 = 2;
		constexpr unsigned int size2 = 6;
		int a = 0, b = 0;
		long arr[size1][size2];
		cout << "Введите число: ";
		cin >> arr[a][b];

		for (int i = 0; i < size1; i++)
		{
			for (int j = 0; j < size2; j++)
			{
				cout << arr[a][b] << '\t';
				arr[a][b] *= 2;
			}
			cout << endl;
		}
	}
	{
		cout << endl << "Задание 2" << endl;
		constexpr unsigned int size1_1 = 2;
		constexpr unsigned int size2_1 = 6;
		int a2 = 0, b2 = 0;
		long arr[size1_1][size2_1];
		cout << "Введите число: ";
		cin >> arr[a2][b2];

		for (int i = 0; i < size1_1; i++)
		{
			for (int j = 0; j < size2_1; j++)
			{
				cout << arr[a2][b2] << '\t';
				arr[a2][b2] += 1;
			}
			cout << endl;
		}
	}



}