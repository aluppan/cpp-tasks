#include <iostream>
#include <random>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	//{
	//	//Задание 1
	//	double range1, range2;
	//	cin >> range1;
	//	cin >> range2;
	//	default_random_engine rng(time(nullptr));
	//	uniform_int_distribution<int> range(range1, range2);

	//	constexpr unsigned int size = 10;
	//	double random_numbers[size];

	//	for (int i = 0; i < size; i++)
	//	{
	//		random_numbers[i] = range(rng);
	//	}

	//	for (int i = 0; i < size; i++)
	//	{
	//		cout << random_numbers[i] << ' ';
	//	}

	//	//bubble
	//	for (int i = 0; i < size - 1; i++)
	//	{
	//		for (int j = 0; j < size - 1; j++)
	//		{
	//			if (random_numbers[j] > random_numbers[j + 1])
	//			{
	//				double temp = random_numbers[j];

	//				random_numbers[j] = random_numbers[j + 1];
	//				random_numbers[j + 1] = temp;
	//			}
	//		}
	//	}
	//	cout << endl << "bubble:" << endl;
	//	for (int i = 0; i < size; i++)
	//	{
	//		cout << random_numbers[i] << ' ';
	//	}
	//
	//	//insertion
	//	for (int i = 1; i < size; i++)
	//	{
	//		int elem = random_numbers[i];
	//		int j = i - 1;

	//		while (j >= 0 && random_numbers[j] < elem)
	//		{
	//			random_numbers[j + 1] = random_numbers[j];
	//			j--;
	//		}

	//		random_numbers[j + 1] = elem;
	//	}
	//	cout << endl << "insertion:" << endl;
	//	for (int i = 0; i < size; i++)
	//	{
	//		cout << random_numbers[i] << ' ';
	//	}
	//
	//	//selection
	//	for (int i = 0; i < size - 1; i++)
	//	{
	//		int target_index = i;

	//		for (int j = i + 1; j < size; j++)
	//		{
	//			if (random_numbers[j] < random_numbers[target_index])
	//			{
	//				target_index = j;
	//			}
	//		}

	//		if (target_index != i)
	//		{
	//			int temp = random_numbers[i];

	//			random_numbers[i] = random_numbers[target_index];
	//			random_numbers[target_index] = temp;
	//		}
	//	}
	//	cout << endl << "selection:" << endl;
	//	for (int i = 0; i < size; i++)
	//	{
	//		cout << random_numbers[i] << ' ';
	//	}
	//}

	{
		//Задание 4
		int i, sum = 0, x, exam_number;
		double average_score;
		const int exam = 10;
		int arr[exam] = {};
		bool check = true;
		for (i = 0; i < exam; i++)
		{
			cout << "Введите оценку для " << i + 1 << " экзамена (1-12): ";
			cin >> arr[i];
			if (arr[i] < 1 || arr[i] > 12)
			{
				cout << "Введите оценку от 1 до 12!" << endl;
				break;
			}
		}
		do
		{
			cout << "1. Вывод оценок" << endl;
			cout << "2. Пересдача экзамена" << endl;
			cout << "3. Выходит ли стипендия" << endl;
			cout << "4. Вывести все оценки (и их номер)" << endl;
			cout << "5. Выход" << endl;
			cin >> x;
			switch (x)
			{
			case 1:
			{
				for (int i = 0; i < exam; i++)
				{
					cout << "Оценка за " << i + 1 << " экзамен = " << arr[i] << endl;
				}
				break;
			}
			case 2:
			{
				cout << "Введите номер экзамена: ";
				cin >> exam_number;
				cout << "Старая оценка = " << arr[exam_number - 1] << endl;
				cout << "Введите новую оценку: ";
				cin >> arr[exam_number - 1];
				break;
			}
			case 3:
			{
				for (int i = 0; i < 10; i++)
				{
					sum = sum + arr[i];
				}
				average_score = sum / 10;
				if (average_score >= 7)
				{
					cout << "Стипендия выходит! Cредний бал: " << average_score << endl;
				}
				else
				{
					cout << "Стипендия не будет! Cредний бал ниже 7: " << average_score << endl;
				}
				break;
			}
			case 4:
			{
				for (int i = 0; i < exam - 1; i++)
				{
					for (int j = 0; j < exam - 1; j++)
					{
						if (arr[j] > arr[j + 1])
						{
							int temp = arr[j];

							arr[j] = arr[j + 1];
							arr[j + 1] = temp;
						}
					}
				}

				for (int i = 0; i < exam; i++)
				{
					cout << "arr[" << i << "] = " << arr[i] << "; ";
				}
				cout << endl;
				break;
			}
			case 5:
			{
				cout << "Выход..." << endl;
				check = false;
			}
			}
		} while (check);
	}





}