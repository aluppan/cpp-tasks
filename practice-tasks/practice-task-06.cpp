#include <iostream>
#include <random>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(nullptr));
	int x, sum, answer, step = 0, right = 0, quantity = 1;
	cout << "1. Легкий" << endl;
	cout << "2. Сложный" << endl;
	cout <<	"Выберите уровень: ";
	cin >> x;
	do
	{
		switch (x)
		{
		case 1:
			quantity = 5;
			break;
		case 2:
			quantity = 10;
			break;
		default:
			break;
		}
		if (x == 1)
		{
			int num1 = rand() % 10 + 1;
			int num2 = rand() % 10 + 1;
			cout << num1 << " * " << num2 << " = ";
			cin >> answer;
			sum = num1 * num2;
		}
		if (x == 2)
		{
			int num1 = rand() % 100 + 2;
			int num2 = rand() % 100 + 2;
			cout << num1 << " * " << num2 << " = ";
			cin >> answer;
			sum = num1 * num2;
		}
		if (sum == answer)
		{
			cout << "Правильно!" << endl;
			right++;
		}
		else
		{
			cout << "Неправильно!" << endl;
		}
		step++;
	} while (step < quantity);
	cout << "Оценка по 12-балльной системе: " << 12 * right / quantity << endl;
}