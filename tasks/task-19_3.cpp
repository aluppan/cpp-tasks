#include <iostream>

using namespace std;

void reverse_arr(int* arr1, int* arr2, int size);
void print_arr(int* arr, int size);
int main()
{
	int const size{10};
	int arr1[size]{19,3,22,1,7,16,18,82,23,4};
	int arr2[size];
	print_arr(arr1, size);
	reverse_arr(arr1, arr2, size);
	print_arr(arr2, size);
}

void reverse_arr(int* arr1, int* arr2, int size)
{
	for (int i = 0; i < size; i++)
	{
		*(arr2 + i) = *(arr1 + size - i - 1);
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