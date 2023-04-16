#include <iostream>
#include <random>

using namespace std;

double arithmetic(int arr[], int size)
{
	float sum = 0;
	for (int i = 0; i < size; i++) 
	{
		sum += arr[i];
	}
	return sum / size;
}

int main()
{	
	setlocale(LC_ALL, "ru");

	default_random_engine rng(time(nullptr));
	uniform_int_distribution<int> range(1, 99);
	constexpr unsigned int size = 10;
	int arr[size];

	for (int i = 0; i < size; i++)
	{
		arr[i] = range(rng);
	}
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;
	cout << "Задание 3: " << endl;
	cout << "Cреднее арифметическое = " << arithmetic(arr, size) << endl;


}