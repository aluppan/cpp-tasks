#include <iostream>
using namespace std;

int main()
{
	
	setlocale(LC_ALL, "ru");
	{
		//Задание 1
		int zero = 0,task1_number;
		cin >> task1_number;
		while (zero < task1_number)
		{
			cout << zero << endl;
			zero++;
		}
	}

	{
		//Задание 2
		int task2_num1, task2_num2;
		cin >> task2_num1 >> task2_num2;
		if (task2_num1 < task2_num2)
		{
			while (task2_num1 < task2_num2)
			{
				if (task2_num1 % 2 == 0)
				{
					cout << "Четные: " << task2_num1 << endl;
					task2_num1++;
				}
				if (task2_num1 % 2 != 0)
				{
					cout << "Нечетные: " << task2_num1 << endl;
					task2_num1++;
				}
				if (task2_num1 % 7 == 0)
				{
					cout << "Кратные на 7 : " << task2_num1 << endl;
					task2_num1++;
				}
			}
		}
		else if (task2_num1 > task2_num2)
		{
			while (task2_num1 > task2_num2)
			{
				if (task2_num1 % 2 == 0)
				{
					cout << "Четные: " << task2_num1 << endl;
					task2_num1--;
				}
				if (task2_num1 % 2 != 0)
				{
					cout << "Нечетные: " << task2_num1 << endl;
					task2_num1--;
				}
				if (task2_num1 % 7 == 0 && task2_num1 != 0)
				{
					cout << "Кратные на 7 : " << task2_num1 << endl;
					task2_num1--;
				}
			}
		}
	}

	{
		//Задание 3
		int task3_num1, task3_num2, sum = 0;
		cin >> task3_num1 >> task3_num2;
		if (task3_num1 <= task3_num2)
		{
			while (task3_num1 <= task3_num2)
			{
				sum += task3_num1;
				task3_num1++;
			}
			cout << sum << endl;
		}
		else if (task3_num1 >= task3_num2)
		{
			while (task3_num1 >= task3_num2)
			{
				sum += task3_num1;
				task3_num1--;
			}
			cout << sum << endl;
		}
	}

	{
		//Задание 4
		int sum = 0, task4_num1 = 1;
		while (task4_num1 > 0)
		{
			cin >> task4_num1;
			if (task4_num1 == 0)
			{
				break;
			}
			sum += task4_num1;
			task4_num1++;
		}
		cout << sum << endl;

	}


}