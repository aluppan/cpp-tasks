#include <iostream>
#include <random>

using namespace std;

void random();
void guess(int);
int entry(int);

int main()
{
	setlocale(LC_ALL, "ru");

	int start = 2;
	do
	{
		if (start == 1)
		{
			random();
		}
		else if (start == 2)
		{
			cout << "Программа «загадывает» четырёхзначное число и играющий должен угадать его." << endl;
			cout << "После ввода пользователем числа программа сообщает," << endl;
			cout << "сколько цифр числа угадано(быки) и сколько цифр угадано и стоит на нужном месте(коровы)." << endl;
		}
		cout << endl;
		cout << "0. Выйти" << endl;
		cout << "1. Начать" << endl; 
		cout << "2. Помощь" << endl; 
		cin >> start;
	} while (start != 0);
}

void random()
{
	srand(time(nullptr));
	int secret = rand() % 8999 + 1000;
	guess(secret);
}

void guess(int secret)
{
	int check = 0;
	int attempt = 0;

	do
	{
		cout << "Число -> ";
		cin >> check;
		for (int i = 1, cow = 0, bulls = 0; i <= 4; i++)
		{
			if (check / 1000 == secret / 1000 && i == 1 ||
				check / 100 % 10 == secret / 100 % 10 && i == 2 ||
				check / 10 % 10 == secret / 10 % 10 && i == 3 ||
				check % 10 == secret % 10 && i == 4)
			{
				cow++;
			}
			else if (check / 1000 == secret / 100 % 10 && i == 1 ||
				check / 1000 == secret / 10 % 10 && i == 1 ||
				check / 1000 == secret % 10 && i == 1 ||
				check / 100 % 10 == secret / 1000 && i == 2 ||
				check / 100 % 10 == secret / 10 % 10 && i == 2 ||
				check / 100 % 10 == secret % 10 && i == 2 ||
				check / 10 % 10 == secret / 100 % 10 && i == 3 ||
				check / 10 % 10 == secret / 1000 && i == 3 ||
				check / 10 % 10 == secret % 10 && i == 3 ||
				check % 10 == secret / 100 % 10 && i == 4 ||
				check % 10 == secret / 10 % 10 && i == 4 || 
				check % 10 == secret / 1000 && i == 4)
			{
				bulls++;
			}
			if (i == 4)
			{
				cout << "коровы = " << cow << " быки = " << bulls << endl;
			}
		}
		attempt++;
	} while (secret != check);
	cout << "Попыток = " << attempt << endl;
}