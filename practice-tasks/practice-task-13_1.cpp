#include <iostream>

using namespace std;

void sorting_min_max(int[10]);

int main()
{
	setlocale(LC_ALL, "ru");

	int arr[10]{ 22,46,89,2,17,9,26,81,78,5 };
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	sorting_min_max(arr);
}

void sorting_min_max(int arr[10])
{
	int min[2]{ 100 };
	int max[2]{ 0 };
	for (int i = 0; i < 10; i++)
	{
		if (min[0] > arr[i])
		{
			min[0] = arr[i];
			min[1] = i + 1;
		}
		else if (max[0] < arr[i])
		{
			max[0] = arr[i];
			max[1] = i + 1;
		}
	}
	cout << "Мин = " << min[0] << " : " << min[1] << endl;
	cout << "Макс = " << max[0] << " : " << max[1] << endl;
}