#include <iostream>
#include <random>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	//{
	//	//Задание 1
	//	constexpr int size = 10;
	//	int max, min, arr[size];
	//	default_random_engine engine(time(nullptr));
	//	uniform_int_distribution<int> range(1, 100);
	//	for (int i = 0; i < size; i++)
	//	{
	//		arr[i] = range(engine);
	//		min = arr[i];
	//		max = arr[i];
	//	}
	//	for (int i = 0; i < size; i++)
	//	{
	//		cout << "arr[" << i << "] = " << arr[i] << endl;
	//		if (min > arr[i])
	//		{
	//			min = arr[i];
	//		}
	//		if (max < arr[i])
	//		{
	//			max = arr[i];
	//		}
	//	}
	//	cout << "Макс: " << max << endl;
	//	cout << "Мин: " << min << endl;
	//}

	{
		//Задание 2
		srand(time(nullptr));
		int i, min_profit, max_profit, month_range1, month_range2, min_month_profit, max_month_profit;
		const int month = 12;
		int arr[month] = {};
		for (i = 0; i < month; i++) 
		{
			cout << "Введите прибыль фирмы за " << i + 1 << " месяц: ";
			cin >> arr[i];
		} 
		cout << "Введите начало диапазона: ";
		cin >> month_range1;
		cout << "Введите конец диапазона: ";
		cin >> month_range2;
		min_profit = arr[month_range1];
		max_profit = arr[month_range1];
		for (i = month_range1; i <= month_range2; i++) 
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
		for (i = month_range1; i <= month_range2; i++) 
		{
			if (arr[i] == min_profit)
			{
				min_month_profit = i;
			}
			if (arr[i] == max_profit)
			{
				max_month_profit = i + 1;
			}
		}
		cout << "Минимальная прибыль была в месяце = " << min_month_profit << endl;
		cout << "Максимальная прибыль была месяце = " << max_month_profit << endl;
	}

	//{
	//	//Задание 3
	//	srand(time(nullptr));
	//	int i, first_minus_element, last_minus_element, max, min, multiply_min, multiply_max, sum = 0, sum_negative = 0, multiply_even = 1, multiply_min_max = 1;
	//	const int size = 10;
	//	int arr[size] = {};
	//	for (i = 0; i < size; i++) 
	//	{
	//		arr[i] = rand() % 25 - 15;
	//		cout << "arr[" << i << "] = " << arr[i] << endl;
	//	} 
	//	min = arr[0];
	//	max = arr[0];
	//	for (i = 0; i < size; i++) 
	//	{
	//		if (min > arr[i])
	//		{
	//			min = arr[i];
	//		}
	//		if (max < arr[i])
	//		{
	//			max = arr[i];
	//		}
	//	}
	//	for (i = 0; i < size; i++) 
	//	{
	//		if (arr[i] < 0)
	//		{
	//			sum_negative += arr[i];
	//		}
	//		if (arr[i] == min)
	//		{
	//			multiply_min = i;
	//		}
	//		if (arr[i] == max)
	//		{
	//			multiply_max = i;
	//		}
	//	}
	//	if (multiply_min < multiply_max) 
	//	{
	//		for (i = multiply_min + 1; i < multiply_max; i++)
	//		{
	//			multiply_min_max *= arr[i];
	//		}
	//	}
	//	else 
	//	{
	//		for (i = multiply_max + 1; i < multiply_min; i++)
	//		{
	//			multiply_min_max *= arr[i];
	//		}
	//	}
	//	for (i = 1; i < size; i += 2)
	//	{
	//		multiply_even *= arr[i];
	//	}
	//	for (i = 0; i < size; i++) 
	//	{
	//		if (arr[i] < 0) 
	//		{
	//			first_minus_element = i;
	//			break;
	//		}
	//	}
	//	for (i = size - 1; i > 0; i--) 
	//	{
	//		if (arr[i] < 0) 
	//		{
	//			last_minus_element = i;
	//			break;
	//		}
	//	}
	//	for (i = first_minus_element + 1; i < last_minus_element; i++)
	//	{
	//		sum += arr[i];
	//	}
	//	cout << "Сумма отрицательных элементов: " << sum_negative << endl;
	//	cout << "Произведение элементов, между мин и макс элементами: " << multiply_min_max << endl;
	//	cout << "Произведение элементов с четными индексами: " << multiply_even << endl;
	//	cout << "Сумму элементов, находящихся между первым и послед-ним отрицательными элементами: " << sum << endl;
	//}

}
