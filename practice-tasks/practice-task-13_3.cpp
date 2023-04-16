#include <iostream>
#include <random>

using namespace std;

int num_in_arr(int[20]);
int prime_num(int[20]);
void view_arr(int[20]);

int main()
{
	setlocale(LC_ALL, "ru");

	int arr[20];
	num_in_arr(arr);
	cout << endl << "простых чисел в массиве = " << prime_num(arr) << endl;
}

int num_in_arr(int arr[30])
{
	default_random_engine engine(time(nullptr));
	uniform_int_distribution<int> range(1, 100);

	for (int i = 0; i < 20; i++)
	{
		arr[i] = range(engine);
	}
	view_arr(arr);
	return arr[20];
}

int prime_num(int arr[20])
{
	int result = 0;
	for (int i = 0; i < 20; i++)
	{
		int n = 0;
		for (int j = 1; j <= arr[i]; j++)
		{
			if (arr[i] % j == 0)
			{
				n++;
			}
			if (n > 2)
			{
				break;
			}
			if (arr[i] == j)
			{
				result++;
			}
		}
	}
	return result;
}

void view_arr(int arr[20])
{
	for (int i = 0; i < 20; i++)
	{
		cout << arr[i] << " ";
	}
}