#include <iostream>
#include <random>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	{
		cout << "Задание 1:" << endl;
		int task1_sum = 0, min, max;
		float average = 0;
		int const task1_size1 = 2;
		int const task1_size2 = 6;
		int task1_arr[task1_size1][task1_size2];

		default_random_engine engine(time(nullptr));
		uniform_int_distribution<int> range(1, 9);

		for (int i = 0; i < task1_size1; i++)
		{
			for (int j = 0; j < task1_size2; j++)
			{
				task1_arr[i][j] = range(engine);
				min = task1_arr[i][j];
				max = task1_arr[i][j];
			}
		}

		for (int i = 0; i < task1_size1; i++)
		{
			for (int j = 0; j < task1_size2; j++)
			{
				cout << task1_arr[i][j] << " ";
				task1_sum += task1_arr[i][j];
				average++;
				if (min > task1_arr[i][j])
				{
					min = task1_arr[i][j];
				}
				if (max < task1_arr[i][j])
				{
					max = task1_arr[i][j];
				}
			}
			cout << endl;
		}

		cout << "Сумма всех элементов = " << task1_sum << endl;
		cout << "Среднее арифметическое всех элементов = " << (float)task1_sum / average << endl;
		cout << "Максимальный элемент = " << max << endl;
		cout << "Минимальный элемент = " << min << endl;
	}

	{
		cout << endl << "Задание 2:" << endl;
		int task2_sum1 = 0, task2_sum2 = 0, sum_final = 0;
		int const task2_size1 = 3;
		int const task2_size2 = 4;
		int task2_arr[task2_size1][task2_size2];
		default_random_engine engine(time(nullptr));
		uniform_int_distribution<int> range(1, 19);
		for (int i = 0; i < task2_size1; i++)
		{
			for (int j = 0; j < task2_size2; j++)
			{
				task2_arr[i][j] = range(engine);
			}
		}
		for (int i = 0; i < task2_size1; i++)
		{
			for (int j = 0; j < task2_size2; j++)
			{
				cout << task2_arr[i][j] << "\t";
				task2_sum1 += task2_arr[i][j];
			}
			cout << "| " << task2_sum1 << endl;
			sum_final += task2_sum1;
			task2_sum1 = 0;
		}
		cout << "------------------------------------" << endl;
		for (int i = 0; i < task2_size2; i++) 
		{
			for (int j = 0; j < task2_size1; j++) 
			{
				task2_sum2 += task2_arr[j][i];
			}
			cout << task2_sum2 << "\t";
			task2_sum2 = 0;
		}
		cout << "| " << sum_final << endl;
	}

	{
		cout << endl << "Задание 3:" << endl;
		const int task3_size = 5, size_10 = 10;
		int first_arr[task3_size][size_10];
		int second_arr[task3_size][task3_size];

		default_random_engine engine(time(nullptr));
		uniform_int_distribution<int> range(1, 50);
		
		cout << "Первый массив: " << endl;
		for (int i = 0; i < task3_size; i++)
		{
			for (int j = 0; j < size_10; j++)
			{
				first_arr[i][j] = range(engine);
				cout << first_arr[i][j] << "\t";
			}
			cout << endl;
		}

		cout << endl << "Второй массив: " << endl;
		for (int i = 0; i < task3_size; i++)
		{
			for (int j = 0; j < task3_size; j++)
			{
				second_arr[i][j] = first_arr[i][j * 2] + first_arr[i][j * 2 + 1];
				cout << second_arr[i][j] << "\t";
			}
			cout << endl;
		}
	}



}