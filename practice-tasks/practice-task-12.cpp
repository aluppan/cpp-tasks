#include <iostream>
using namespace std;

//Задание 1
int rectangle()
{
	cout << "Задание 1" << endl;
	int height_rectangle, width_rectangle;
	cout << "Введите высоту: ";
	cin >> height_rectangle;
	cout << "Введите ширину: ";
	cin >> width_rectangle;

	for (int i = 1; i <= height_rectangle; i++)
	{
		if (i == 1 || i == height_rectangle)
			for (int j = 1; j <= width_rectangle; j++)
			{
				cout << " * ";
			}
		else
		{
			cout << " * ";
			for (int j = 1; j <= (width_rectangle - 2); j++)
			{
				cout << "   ";
			}
			cout << " * ";
		}
		cout << endl;
	}
	return 0;
}

//Задание 2
double factorial()
{
	cout << endl << "Задание 2" << endl;
	double number, you_factorial = 1, i = 1;
	cout << "Введите число: ";
	cin >> number;
	while (i <= number)
	{
		you_factorial *= i;
		i++;
	}
	cout << "Факториал переданного числа - " << you_factorial << endl;
	return 0;
}

//Задание 3
int prime_number()
{
	cout << endl << "Задание 3" << endl;
	int you_number;
	cout << "Введите число: ";
	cin >> you_number;
	for (int i = 2; i * i <= you_number; ++i) {
		if (you_number % i == 0) 
		{
			cout << "Число непростое!" << endl;
			return 0;
		}
	}
	cout << "Число простое!" << endl;
	return 0;
}

//Задание 4
int kub()
{
	cout << endl << "Задание 4" << endl;
	int num, you_kub = 0, i = 0;
	cout << "Введите число: ";
	cin >> num;
	num = num * num * num;
	while (num != 0)
	{
		you_kub += num % 10;
		num /= 10;
		i++;
	}
	cout << you_kub << endl;
	return 0;
}

//Задание 5
double max_number()
{
	int num1_max, num2_max, max;
	cout << endl << "Задание 5" << endl;
	cout << "Введите первое число: ";
	cin >> num1_max;
	cout << "Введите второе число: ";
	cin >> num2_max;

	max = num1_max;
	if (max < num2_max)
	{
		max = num2_max;
		cout << "Это число максимальное: " << num2_max << endl;
	}
	else
	{
		cout << "Это число максимальное: " << num1_max << endl;
	}
	return 0;
}

//Задание 6
bool value()
{
	cout << endl << "Задание 6" << endl;
	int you_value;
	cout << "Введите число: ";
	cin >> you_value;
	bool res;
	if (you_value > 0)
	{
		res = true;
	}
	else
	{
		res = false;
	}
	cout << res << endl;
	return 0;
}

int main()
{
	setlocale(LC_ALL, "ru");
	//Задание 1
	rectangle();
	//Задание 2
	factorial();
	//Задание 3
	prime_number();
	//Задание 4
	kub();
	//Задание 5
	max_number();
	//Задание 6
	value();
}