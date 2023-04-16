#include <iostream>

using namespace std;

void change(int[10]);
void view_arrr(int[10]);

int main()
{
	int arr[10]{ 97,36,89,1,17,8,26,44,61,3 };
	view_arrr(arr);
	change(arr);
}

void change(int arr[10])
{
	for (int i = 0, j = 9; i < 5; i++, j--)
	{
		int l = arr[i];
		arr[i] = arr[j];
		arr[j] = l;
	}
	view_arrr(arr);
}

void view_arrr(int arr[10])
{
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}