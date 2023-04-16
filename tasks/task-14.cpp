#include <iostream>
#include <random>

using namespace std;

int linear_search(int arr[10], int task1_search)
{
	int result_index = -1;
	int iters = 0;
	for (int i = 0; i < 10; i++)
	{
		iters++;
		if (arr[i] == task1_search)
		{
			result_index = i;
			return iters;
		}
	}
}

int binary_search(int arr[10], int task2_search)
{
	size_t L = 0;
	size_t R = 10 - 1;
	size_t M;

	while (L < R)
	{
		M = L + (R - L) / 2;

		if (arr[M] > task2_search)
		{
			R = M;
		}
		else if (arr[M] < task2_search)
		{
			L = M;
		}
		else
		{
			M += 1;
			return M;
		}
	}
}

int translation_num(int digit)
{
	int i = 0;
	int digit_2 = digit;
	int rest = 1;
	while (digit_2 >= 1 && rest <= 1)
	{
		rest = digit_2 % 10;
		digit_2 = digit_2 / 10;
		i = i + 1;
	}
	int two = 1;
	int sum = 0;
	digit_2 = digit;
	if (rest > 1)
	{
		cout << "Это не двоичное число!" << endl;
	}
	else
	{
		while (i > 0)
		{
			rest = digit_2 % 10;
			digit_2 = digit_2 / 10;
			sum = sum + rest * two;
			two = two * 2;
			i = i - 1;
		}
		return sum;
	}

}


int main()
{
	setlocale(LC_ALL, "ru");

	default_random_engine rng(time(nullptr));
	uniform_int_distribution<int> range(1, 99);
	constexpr unsigned int size = 10;
	int arr[size];

	for (int i = 0; i < size; i++)
	{
		arr[i] = range(rng);
	}
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;
	

	cout << "Задание 1: " << endl;
	int task1_search;
	cout << "Поиск -> ";
	cin >> task1_search;
	cout << "Номер заданного ключа = " << linear_search(arr, task1_search) << endl;
	

	cout << endl << "Задание 2: " << endl;
	int task2_search;
	cout << "Поиск -> ";
	cin >> task2_search;
	cout << "Номер заданного ключа = " << binary_search(arr, task2_search) << endl;


	cout << endl << "Задание 3: " << endl;
	int digit;
	cout << "Введите число в двоичном виде: ";
	cin >> digit;
	cout << "Число в десятичное виде = " << translation_num(digit) << endl;
}