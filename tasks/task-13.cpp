#include <iostream>
using namespace std;

//Задание 1
float degree(int number, int pow_func)
{
	int res = 1;
	for (int i = 0; i < pow_func; i++)
	{
		res *= number;
	}
	return res;
}

//Задание 2
int sum_range(int start_range,  int end_range)
{
	int sum = 0;
	if (start_range < end_range)
	{
		start_range += 1;
	}
	else if (start_range > end_range)
	{
		cout << "Начало больше конца!" << endl;
		return 0;
	}
	else
	{
		cout << "Начало и конец одинаковые!" << endl;
		return 0;
	}
	while (start_range < end_range)
	{
		sum += start_range;
		start_range++;
	}
	return sum;
}

//Задание 3
void card_deck(int suit, int select_card)
{
	char card[13] = { 'T','2','3','4','5','6','7','8','9','10','В','Д','К' };
	if (suit == 1)
	{
		cout << " _______\n";
		cout << "|       |\n";
		if (select_card == 10)
		{
			cout << "|1" << card[select_card - 1] << "     |\n";
		}
		else
		{
			cout << "|" << card[select_card - 1] << "      |\n";
		}
		cout << "|  пики |\n";
		if (select_card == 10)
		{
			cout << "|     1" << card[select_card - 1] << "|\n";
		}
		else
		{
			cout << "|      " << card[select_card - 1] << "|\n";
		}
		cout << "|_______|\n";
	}
	if (suit == 2)
	{
		cout << " _______\n";
		cout << "|       |\n";
		if (select_card == 10)
		{
			cout << "|1" << card[select_card - 1] << "     |\n";
		}
		else
		{
			cout << "|" << card[select_card - 1] << "      |\n";
		}
		cout << "| червы |\n";
		if (select_card == 10)
		{
			cout << "|     1" << card[select_card - 1] << "|\n";
		}
		else
		{
			cout << "|      " << card[select_card - 1] << "|\n";
		}
		cout << "|_______|\n";
	}
	if (suit == 3)
	{
		cout << " _______\n";
		cout << "|       |\n";
		if (select_card == 10)
		{
			cout << "|1" << card[select_card - 1] << "     |\n";
		}
		else
		{
			cout << "|" << card[select_card - 1] << "      |\n";
		}
		cout << "| бубны |\n";
		if (select_card == 10)
		{
			cout << "|     1" << card[select_card - 1] << "|\n";
		}
		else
		{
			cout << "|      " << card[select_card - 1] << "|\n";
		}
		cout << "|_______|\n";
	}
	if (suit == 4)
	{
		cout << " _______\n";
		cout << "|       |\n";
		if (select_card == 10)
		{
			cout << "|1" << card[select_card - 1] << "     |\n";
		}
		else
		{
			cout << "|" << card[select_card - 1] << "      |\n";
		}
		cout << "| трефы |\n";
		if (select_card == 10)
		{
			cout << "|     1" << card[select_card - 1] << "|\n";
		}
		else
		{
			cout << "|      " << card[select_card - 1] << "|\n";
		}
		cout << "|_______|\n";
	}
}

//Задание 4
int lucky_num(int check_number)
{
	int result = 0;
	int number1, number2;
	number1 = check_number / 100000;
	number1 += check_number % 100000 / 10000;
	number1 += check_number % 10000 / 1000;
	number2 = check_number % 10;
	number2 += check_number % 100 / 10;
	number2 += check_number % 1000 / 100;
	if (number1 == number2)
	{
		cout << "Счастливое число ";
		return result;
	}
	else
	{
		cout << "Не счастливое число ";
		return result;
	}
}

int main()
{
	setlocale(LC_ALL, "ru");

	cout << "Задание 1: " << endl;
	int res, number, pow_main;
	cout << "Введите число: ";
	cin >> number;
	cout << "Введите степень: ";
	cin >> pow_main;
	res = degree(number, pow_main);
	cout << number << " ^ " << pow_main << " = " << res << endl;

	cout << endl << "Задание 2: " << endl;
	int start_range, end_range, sum;
	cout << "Введите начало диапазона: ";
	cin >> start_range;
	cout << "Введите конец диапазона: ";
	cin >> end_range;
	sum = sum_range(start_range, end_range);
	cout << "Сумма чисел из диапазона между ними = " << sum << endl;

	cout << endl << "Задание 3: " << endl;
	int select_card, suit;
	cout << "1. Туз" << endl;
	cout << "2. Двойка" << endl;
	cout << "3. Тройка" << endl;
	cout << "4. Четверка" << endl;
	cout << "5. Пятерка" << endl;
	cout << "6. Шестерка" << endl;
	cout << "7. Семерка" << endl;
	cout << "8. Восьмерка" << endl;
	cout << "9. Девятка" << endl;
	cout << "10. Десятка" << endl;
	cout << "11. Валет" << endl;
	cout << "12. Дама" << endl;
	cout << "13. Kороль" << endl;
	cout << "Выберите карту: ";
	cin >> select_card;
	cout << "1. Пики" << endl;
	cout << "2. Червы" << endl;
	cout << "3. Бубны" << endl;
	cout << "4. Трефы" << endl;
	cout << "Выберите масть: ";
	cin >> suit;
	card_deck(suit, select_card);
	
	cout << endl << "Задание 4: " << endl;
	int result, check_number;
	cout << "Введите шестизначное число: ";
	cin >> check_number;
	result = lucky_num(check_number);

}