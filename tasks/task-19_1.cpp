#include <iostream>

using namespace std;

void arr_ctrl_c(int* arr, int* arr2, int size);
void print_arr(int* arr, int size);
int main()
{
	int const size{10};
	int arr[size]{55,75,19,11,21,77,66,49,20,25};
	int arr2[size];
	print_arr(arr, size);
	arr_ctrl_c(arr, arr2, size);
	print_arr(arr2, size);
}

void arr_ctrl_c(int* arr, int* arr2, int size)
{
	for (int i = 0; i < size; i++)
	{
		*(arr2 + i) = *(arr + i);
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