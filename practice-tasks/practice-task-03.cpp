#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	
	cout << "Задание 1\n";
	int rating1, rating2, rating3, rating4, rating5, total_rating;
	cout << "Оценка - ";
	cin >> rating1;
	cout << "Оценка - ";
	cin >> rating2;
	cout << "Оценка - ";
	cin >> rating3;
	cout << "Оценка - ";
	cin >> rating4;
	cout << "Оценка - ";
	cin >> rating5;
	total_rating = (rating1 + rating2 + rating3 + rating4 + rating5) / 5;
	if (total_rating >= 4)
	{
		cout << "Вы прошли! Ваш проходной балл: " << total_rating << endl;
	}
	else
	{
		cout << "Вы не прошли! Ваш проходной балл: " << total_rating << endl;
	}
	
	cout << "\nЗадание 2\n";
	int number;
	cout << "число - ";
	cin >> number;
	if (number % 2 == 0)
	{
		cout << number * 3 << endl;
	}
	else
	{
		cout << number / 2 << endl;
	}

	cout << "\nЗадание 3\n";
	float number1, number2;
	cout << "Первое число - ";
	cin >> number1;
	cout << "Второе число - ";
	cin	>> number2;
	cout << "выберите | + | - | * | / |" << endl;
	char symbol;
	cin >> symbol;
	if (symbol == '+')
	{
		cout << number1 + number2 << endl;
	}
	else if (symbol == '-')
	{
		cout << number1 - number2 << endl;
	}
	else if (symbol == '*')
	{
		cout << number1 * number2 << endl;
	}
	else if (symbol == '/')
	{
		if (number1 == 0 || number2 == 0)
		{
			cout << "Деление на ноль невозможно!" << endl;
		}
		else
		{
			cout << number1 / number2 << endl;
		}
	}
	else
	{
		cout << "Неправильно" << endl;
	}

}