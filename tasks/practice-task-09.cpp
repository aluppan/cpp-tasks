#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	//{
	//	//Задание 1
	//	int i, sum = 0;
	//	const int month = 6;
	//	int arr[month] = {};
	//	for (i = 0; i < month; i++)
	//	{
	//		cout << "Введите прибыль фирмы за " << i + 1 << " месяц: ";
	//		cin >> arr[i];
	//		sum = sum + arr[i];
	//	}
	//	cout << "Прибыль фирмы за 6 месяцев = " << sum << endl;
	//}

	//{
	//	//Задание 2
	//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//	for (int i = 0; i < 10; i++)
	//	{
	//		cout << arr[i] << " ";
	//	}
	//	cout << endl;
	//	for (int i = 9; i > -1; i--)
	//	{
	//		cout << arr[i] << " ";
	//	}
	//}

	//{
	//	//Задание 3
	//	const int side = 5;
	//	int sum = 0;
	//	int arr[side] = {};
	//	for (int i = 0; i < side; i++) 
	//	{
	//		cout << "Введите " << i + 1 << " сторону пятиугольника: ";
	//		cin >> arr[i];
	//	}
	//	for (int i = 0; i < side; i++)
	//	{
	//		sum = sum + arr[i];
	//	}
	//	cout << "Периметр пятиугольника = " << sum << endl;
	//}

	{
		//Задание 4
		int i, min_profit, max_profit, min_month_profit, max_month_profit;
		const int month = 12;
		int arr[month] = {};
		for (i = 0; i < month; i++)
		{
			cout << "Введите прибыль фирмы за " << i + 1 << " месяц: ";
			cin >> arr[i];
		}
		min_profit = arr[0];
		max_profit = arr[11];
		for (i = 0; i <= 11; i++)
		{
			if (min_profit > arr[i])
			{
				min_profit = arr[i];
			}
			if (max_profit < arr[i])
			{
				max_profit = arr[i];
			}
		}
		for (i = 0; i <= 11; i++)
		{
			if (arr[i] == min_profit)
			{
				min_month_profit = i + 1;
			}
			if (arr[i] == max_profit)
			{
				max_month_profit = i + 1;
			}
		}
		cout << "Минимальная прибыль была в месяце = " << min_month_profit << endl;
		cout << "Максимальная прибыль была месяце = " << max_month_profit << endl;
	}
}