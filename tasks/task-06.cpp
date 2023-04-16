#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	////Задание 1
	//int task_a, sum1 = 0;
	//cin >> task_a;

	//while (task_a <= 500)
	//{
	//	sum1 += task_a;
	//	task_a++;
	//}
	//cout << sum1 << endl;

	////Задание 2
	//int task_x, task_y, sum2 = 1, i = 1;
	//cin >> task_x >> task_y;

	//while (i <= task_y)
	//{
	//	sum2 *= task_x;
	//	i++;
	//}
	//cout << sum2 << endl;

	////Задание 3
	//int num_1 = 1, num_1000 = 1000, sum3 = 0;

	//while (num_1 <= num_1000)
	//{
	//	sum3 += num_1;
	//	num_1++;
	//}
	//cout << sum3 / 1000 << endl;

	////Задание 4
	//int task_a2, sum4 = 1;
	//cout << "а: ";
	//cin >> task_a2;

	//while (task_a2 <= 20)
	//{
	//	if (task_a2 < 1)
	//	{
	//		cout << "1 <= a <= 20";
	//	}
	//	sum4 = sum4 * task_a2;
	//	task_a2++;
	//}
	//cout << sum4 << endl;

	//Задание 5
	int task_k, sum5 = 1, number = 1;
	cin >> task_k;

	while (number <= 10)
	{
		sum5 = task_k * number;
		cout << task_k << " * " << number << " = " << sum5 << endl;
		sum5++;
		number++;
	}


}