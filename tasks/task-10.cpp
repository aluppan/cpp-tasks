#include <iostream>
#include <random>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	{
		//Задание 1
		int x;
		bool check = true;
		constexpr int size = 10;
		int mobile_num[size];
		int home_num[size];

		default_random_engine engine(time(nullptr));
		uniform_int_distribution<int> range(1, 50);

		for (int i = 0; i < size; i++)
		{
			mobile_num[i] = range(engine);
			home_num[i] = range(engine);
		}

		do
		{
			cout << "1. Отсортировать по номерам мобильных" << endl;
			cout << "2. Отсортировать по домашним номерам телефонов" << endl;
			cout << "3. Вывести пользовательский данные" << endl;
			cout << "4. Выход" << endl;
			cin >> x;
			switch (x)
			{
			case 1:
			{
				for (int i = 0; i < size - 1; i++)
				{
					for (int j = 0; j < size - 1; j++)
					{
						if (mobile_num[j] > mobile_num[j + 1])
						{
							int temp = mobile_num[j];

							mobile_num[j] = mobile_num[j + 1];
							mobile_num[j + 1] = temp;
						}
					}
				}

				for (int i = 0; i < size; i++)
				{
					cout << "М: " << mobile_num[i] << " - " << "Д: " << home_num[i] << endl;
				}
				break;
			}
			case 2:
			{
				for (int i = 0; i < size - 1; i++)
				{
					for (int j = 0; j < size - 1; j++)
					{
						if (home_num[j] > home_num[j + 1])
						{
							int temp = home_num[j];

							home_num[j] = home_num[j + 1];
							home_num[j + 1] = temp;
						}
					}
				}

				for (int i = 0; i < size; i++)
				{
					cout << "Д: " << home_num[i] << " - " << "М: " << mobile_num[i] << endl;
				}
				break;
			}
			case 3:
			{
				for (int i = 0; i < size; i++)
				{
					cout << "Мобильный номер: " << mobile_num[i] << endl;
				}
				cout << endl;
				for (int i = 0; i < size; i++)
				{
					cout << "Домашний номер: " << home_num[i] << endl;
				}
				break;
			}
			case 4:
			{
				cout << "Выход..." << endl;
				check = false;
			}
			}
		} while (check);
	}

	//{
	//	//Задание 2
	//	constexpr int size = 20;
	//	int random_num[size];

	//	default_random_engine engine(time(nullptr));
	//	uniform_int_distribution<int> range(1, 100);

	//	for (int i = 0; i < size; i++)
	//	{
	//		random_num[i] = range(engine);
	//		cout << random_num[i] << ' ';
	//	}

	//	for (int i = 0; i < size - 1; i++)
	//	{
	//		int change = 0;
	//		for (int j = 0; j < size - 1; j++)
	//		{
	//			if (random_num[j] > random_num[j + 1])
	//			{
	//				int temp = random_num[j];
	//				random_num[j] = random_num[j + 1];
	//				random_num[j + 1] = temp;
	//				change++;
	//			}
	//		}
	//		if (change == 0)
	//		{
	//			break;
	//		}
	//	}
	//	cout << endl;
	//	for (int i = 0; i < size; i++)
	//	{
	//		cout << random_num[i] << ' ';
	//	}
	//}
	

	//int sum1 = 0, sum2 = 0;
	////int sum_bubble = 1, sum_select = 1; //, bubble = 1, select= 1;
	//constexpr int size = 1000;
	//int random_num[size];

	//default_random_engine engine(time(nullptr));
	//uniform_int_distribution<int> range(1, 1000);

	//int change_bubble = 0; //compared_bubble = 0;
	//for (int i = 0; i < size - 1; i++)
	//{
	//	for (int j = 0; j < size - 1; j++)
	//	{
	//		if (random_num[j] > random_num[j + 1])
	//		{
	//			int temp = random_num[j];
	//			random_num[j] = random_num[j + 1];
	//			random_num[j + 1] = temp;
	//		}
	//		change_bubble++;
	//		sum1 = sum1 + change_bubble;
	//	}
	//}
	//sum1 = sum1 / change_bubble;
	//int change_select = 0; //compared_select = 0;
	//for (int i = 0; i < size - 1; i++)
	//{
	//	int target_index = i;
	//	for (int j = i + 1; j < size; j++)
	//	{
	//		if (random_num[j] < random_num[target_index])
	//		{
	//			target_index = j;
	//		}
	//	}
	//	if (target_index != i)
	//	{
	//		int temp = random_num[i];
	//		random_num[i] = random_num[target_index];
	//		random_num[target_index] = temp;
	//	}
	//	change_select++;
	//	sum2 = sum2 + change_select;
	//}
	//sum2 = sum2 / change_select;
	//cout << "среднее число для bubble = " << sum1 << endl;
	//cout << "среднее число select = " << sum2 << endl;
	

















}