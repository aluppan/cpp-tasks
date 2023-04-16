#include <iostream>
#include <Windows.h>
#include <random>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	//Задание 1
	
	//bool check = true;
	//do
	//{
	//	char symbol;
	//	int op, i = 0, speed;
	//	cout << "Введите символ: ";
	//	cin >> symbol;
	//	cout << "1. Вертикальная линия" << endl;
	//	cout << "2. Горизонтальная линия" << endl;
	//	cout << "3. Выйти" << endl;
	//	cout << "Выберите линию -> ";
	//	cin >> op;
	//	cout << "1. Быстро" << endl;
	//	cout << "2. Нормально" << endl;
	//	cout << "3. Медленно" << endl;
	//	cout << "Выберите скорость: ";
	//	cin >> speed;

	//	if (speed < 1 || speed > 3)
	//	{
	//		cout << "Введите от 1 до 3!" << endl;
	//		return main();
	//	}
	//	switch (op)
	//	{
	//		case 1:
	//		{
	//			if (speed == 1)
	//			{
	//				while (i <= 10)
	//				{
	//					cout << symbol << endl;
	//					Sleep(100);
	//					i++;
	//				}
	//				break;
	//			}
	//			if (speed == 2)
	//			{
	//				while (i <= 10)
	//				{
	//					cout << symbol << endl;
	//					Sleep(500);
	//					i++;
	//				}
	//				break;
	//			}
	//			if (speed == 3)
	//			{
	//				while (i <= 10)
	//				{
	//					cout << symbol << endl;
	//					Sleep(1000);
	//					i++;
	//				}
	//				break;
	//			}
	//		}
	//		case 2:
	//		{
	//			if (speed == 1)
	//			{
	//				while (i <= 10)
	//				{
	//					cout << symbol;
	//					Sleep(100);
	//					i++;
	//				}
	//				break;
	//			}
	//			if (speed == 2)
	//			{
	//				while (i <= 10)
	//				{
	//					cout << symbol;
	//					Sleep(500);
	//					i++;
	//				}
	//				break;
	//			}
	//			if (speed == 3)
	//			{
	//				while (i <= 10)
	//				{
	//					cout << symbol;
	//					Sleep(1000);
	//					i++;
	//				}
	//				break;
	//			}
	//		}
	//		case 3:
	//		{
	//			cout << "Выход..." << endl;
	//			check = false;
	//		}
	//	}

	//} while (check);


	//Задание 2
	
	//char step;
	//int player = 0, comp = 0, i, player_rating = 0, comp_rating = 0;
	//srand(time(nullptr));
	//cout << "Чтобы бросать кубики нажимайте клавишу +" << endl;

	//for (int j = 1, i = 1; i <= 12; i++)
	//{
	//	int kub = rand() % 6 + 1;
	//	if (i % 4 == 1)
	//	{
	//		cout << j << " раунд" << endl;
	//		cout << "Вы: " << endl;
	//		cin >> step;
	//		j++;
	//	}
	//	else if (i % 4 == 3)
	//	{
	//		cout << "Компьютер: " << endl;
	//	}
	//	if (i % 4 == 1 || i % 4 == 2)
	//	{
	//		player += kub;
	//		player_rating += kub;
	//	}
	//	else
	//	{
	//		comp += kub;
	//		comp_rating += kub;
	//	}

	//	switch (kub)
	//	{
	//	case 1:
	//	{
	//		cout << "---------" << endl;
	//		cout << "|       |" << endl;
	//		cout << "|   o   |" << endl;
	//		cout << "|       |" << endl;
	//		cout << "---------" << endl;
	//		break;
	//	}
	//	case 2:
	//	{
	//		cout << "---------" << endl;
	//		cout << "| o     |" << endl;
	//		cout << "|       |" << endl;
	//		cout << "|     o |" << endl;
	//		cout << "---------" << endl;
	//		break;
	//	}
	//	case 3:
	//	{
	//		cout << "---------" << endl;
	//		cout << "| o     |" << endl;
	//		cout << "|   o   |" << endl;
	//		cout << "|     o |" << endl;
	//		cout << "---------" << endl;
	//		break;
	//	}
	//	case 4:
	//	{
	//		cout << "---------" << endl;
	//		cout << "| o   o |" << endl;
	//		cout << "|       |" << endl;
	//		cout << "| o   o |" << endl;
	//		cout << "---------" << endl;
	//		break;
	//	}
	//	case 5:
	//	{
	//		cout << "---------" << endl;
	//		cout << "| o   o |" << endl;
	//		cout << "|   o   |" << endl;
	//		cout << "| o   o |" << endl;
	//		cout << "---------" << endl;
	//		break;
	//	}
	//	case 6:
	//	{
	//		cout << "---------" << endl;
	//		cout << "| o   o |" << endl;
	//		cout << "| o   o |" << endl;
	//		cout << "| o   o |" << endl;
	//		cout << "---------" << endl;
	//		break;
	//	}
	//	default:
	//		break;
	//	}

	//	if (i % 4 == 0)
	//	{
	//		if (player > comp)
	//		{
	//			cout << j - 1 << " раунд" << " выиграли вы" << endl << endl;
	//		}
	//		else if (player == comp)
	//		{
	//			cout << j - 1 << " раунд" << " ничья" << endl << endl;
	//		}
	//		else
	//		{
	//			cout << j - 1 << " раунд" << " выиграл компьютер" << endl << endl;
	//		}
	//	}
	//}

	//if (player_rating > comp_rating)
	//{
	//	cout << "Вы выиграли!" << endl;
	//	cout << "Ваш счет: " << player_rating << endl;
	//	cout << "Счет компьютера: " << comp_rating << endl;
	//}
	//else if (player_rating == comp_rating)
	//{
	//	cout << "Ничья!" << endl;
	//	cout << "Ваш счет: " << player_rating << endl;
	//	cout << "Счет компьютера: " << comp_rating << endl;
	//}
	//else
	//{
	//	cout << "Выиграл комьютер!" << endl;
	//	cout << "Ваш счет: " << player_rating << endl;
	//	cout << "Счет компьютера: " << comp_rating << endl;
	//}


	//Задание 3

	bool check2 = true;
	int guess_number, level, step_level1 = 5, step_level2 = 10;
	srand(time(nullptr));
	cout << "1. Легкий" << endl;
	cout << "2. Сложный" << endl;
	cout << "Выберите себе уровнь сложности: ";
	cin >> level;
	if (level < 1 || level > 2)
	{
		cout << "Введите от 1 до 2!" << endl;
		return 0;
	}
	if (level == 1)
	{
		int comp_number = rand() % 10 + 1;
		do {
			cout << "Угадайте число от 1 до 10 (Осталось попыток " << step_level1 << "): ";
			cin >> guess_number;
			if (guess_number < 0 || guess_number > 10)
			{
				cout << "Введите от 1 до 10!" << endl;
			}
			else if (comp_number < guess_number)
			{
				cout << "Число меньше" << endl;
			}
			else if (comp_number > guess_number)
			{
				cout << "Число больше" << endl;
			}
			step_level1--;
			if (step_level1 < 1)
			{
				check2 = false;
			}
			if (comp_number == guess_number)
			{
				check2 = false;
			}
		} while (check2);
		if (step_level1 < 1)
		{
			cout << "Вы проиграли" << endl;
		}
		else if (comp_number == guess_number)
		{
			cout << "Вы выиграли!" << endl;
		}
	}
	
	if (level == 2)
	{
		int comp_number = rand() % 100 + 10;
		do {
			cout << "Угадайте число от 1 до 100 (Осталось попыток " << step_level2 << "): ";
			cin >> guess_number;
			if (guess_number < 10 || guess_number > 100)
			{
				cout << "Введите от 10 до 100!" << endl;
			}
			else if (comp_number < guess_number)
			{
				cout << "Число меньше" << endl;
			}
			else if (comp_number > guess_number)
			{
				cout << "Число больше" << endl;
			}
			step_level2--;
			if (step_level2 < 1)
			{
				check2 = false;
			}
			if (comp_number == guess_number)
			{
				check2 = false;
			}
		} while (check2);
		if (step_level2 < 1)
		{
			cout << "Вы проиграли" << endl;
		}
		else if (comp_number == guess_number)
		{
			cout << "Вы выиграли!" << endl;
		}
	}
}
