#include <iostream>
#include <random>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int const size = 6;
	int arr[size][size];

	default_random_engine engine(time(nullptr));
	uniform_int_distribution<int> range(1, 9);

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		arr[i][j] = range(engine);
	}

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	
	int where_move;
	int shift;

	cout << "1. Влево" << endl;
	cout << "2. Вправо" << endl;
	cout << "3. Вверх" << endl;
	cout << "4. Вниз" << endl;
	cout << "Выберете куда сдвигать: ";
	cin >> where_move;
	cout << "На сколько клеток сдвигаем: ";
	cin >> shift;

	for (int l = 0; l < shift; l++)
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = 1; j < size; j++)
			{
				int number;
				switch (where_move)
				{
				case 1:
				{
					number = arr[i][j];
					arr[i][j] = arr[i][j - 1];
					arr[i][j - 1] = number;
				}
				break;
				case 2:
				{
					number = arr[i][size - 1];
					arr[i][size - 1] = arr[i][j - 1];
					arr[i][j - 1] = number;
				}
				break;
				case 3:
				{
					number = arr[j][i];
					arr[j][i] = arr[j - 1][i];
					arr[j - 1][i] = number;
				}
				break;
				case 4:
				{
					number = arr[size - 1][i];
					arr[size - 1][i] = arr[j - 1][i];
					arr[j - 1][i] = number;
				}
				break;
				default:
					break;
				}
			}
		}
	}
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

}