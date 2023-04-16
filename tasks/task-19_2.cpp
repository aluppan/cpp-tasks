#include <iostream>

using namespace std;

void reverse(int* arr, int size);
void print_arr(int* arr, int size);
int main()
{
	int const size{10};
	int arr[size]{5,7,37,11,59,4,3,19,22,25};
	print_arr(arr, size);
	reverse(arr, size);
	print_arr(arr, size);
}

void reverse(int* arr, int size)
{
	for (int i = 0; i < size / 2; i++)
	{
		int k = *(arr + i);
		*(arr + i) = *(arr + size - 1 - i);
		*(arr + size - 1 - i) = k;
	}
}

void print_arr(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << *(arr + i) << " ";
	}
	cout << endl;
}