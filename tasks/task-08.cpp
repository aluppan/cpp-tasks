#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	//Задание 1
	int num1, num2, num3, same = 0, different = 0;
	for (int num = 100; num <= 999; num++)
	{
		num1 = num / 100;
		num2 = num % 100 / 10;
		num3 = num % 10;
		if (num1 == num2 && num1 != num3 || num1 == num3 && num1 != num2 || num2 == num3 && num1 != num2)
		{
			same++;
		}
		if (num1 != num2 && num1 != num3 && num2 != num3)
		{
			different++;
		}
	}
	cout << "Количество целых чисел в диапазоне от 100 до 999, у которых есть две одинаковые цифры - " << same << endl;
	//Задание 2
	cout << "Количество целых чисел в диапазоне от 100 до 999, у которых все цифры разные - " << different << endl;

	//Задание 3
	int delete_number = 0, integer, old_integer;
	cout << "Введите любое целое число: ";
	cin >> integer;
	old_integer = integer;
	for (int i = 0, j = 1; integer > 0; i++)
	{
		if (integer % 10 != 3 && integer % 10 != 6) 
		{
			delete_number += j * (integer % 10);
			j *= 10;
		}
		integer /= 10;
	}
	cout << "было: " << old_integer << "; cтало: " << delete_number << endl;
}