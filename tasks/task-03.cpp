#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	//{
	//	//Задание 1
	//	int number, first_part, second_part;
	//	cout << "введенное число — ";
	//	cin >> number;
	//	if (number > 99999 && number < 1000000)
	//	{
	//		first_part = number % 10 + (number / 10) % 10 + (number / 100) % 10;
	//		second_part = (number / 1000)% 10 + (number / 10000) % 10 + (number / 100000) % 10;
	//		if (first_part == second_part)
	//		{
	//			cout << "счастливое число" << endl;
	//		}
	//		else
	//		{
	//			cout << "несчастливое число" << endl;
	//		}
	//	}
	//	else
	//	{
	//		cout << "введите шестизначное число" << endl;
	//	}
	//}

	//{
	//	//Задание 2
	//	int four_digit, n4, n3, n2, n1;
	//	cin >> four_digit;
	//	if (four_digit > 999 && four_digit < 10000)
	//	{
	//		n4 = four_digit % 10;
	//		four_digit /= 10;
	//		n3 = four_digit % 10;
	//		four_digit /= 10;
	//		n2 = four_digit % 10;
	//		four_digit /= 10;
	//		n1 = four_digit % 10;
	//		four_digit /= 10;
	//		cout << n2 << n1 << n4 << n3 << endl;
	//	}
	//	else
	//	{
	//		cout << "введите четырехзначное число" << endl;
	//	}
	//}

	//{
	//	//Задание 3
	//	int num1, num2, num3, num4, num5, num6, num7, max;
	//	cout << "Введите 1 число — ";
	//	cin >> num1;
	//	cout << "Введите 2 число — ";
	//	cin >> num2;
	//	cout << "Введите 3 число — ";
	//	cin >> num3;
	//	cout << "Введите 4 число — ";
	//	cin >> num4;
	//	cout << "Введите 5 число — ";
	//	cin >> num5;
	//	cout << "Введите 6 число — ";
	//	cin >> num6;
	//	cout << "Введите 7 число — ";
	//	cin >> num7;
	//	max = num1;
	//	if (max < num2)
	//	{
	//		max = num2;
	//	}
	//	else if (max < num3)
	//	{
	//		max = num3;
	//	}
	//	else if (max < num4)
	//	{
	//		max = num4;
	//	}
	//	else if (max < num5)
	//	{
	//		max = num5;
	//	}
	//	else if (max < num6)
	//	{
	//		max = num6;
	//	}
	//	else if (max < num7)
	//	{
	//		max = num7;
	//	}
	//	cout << "Максимальное число: " << max << endl;
	//}

	{
		//Задание 4
		int weight, distance_a_b, distance_b_c, distance_a_c, liter;
		const int plane_fuel = 300;
		cout << "Вес груза: ";
		cin >> weight;
		cout << "расстояние между пунктами A и B в км: " << endl;
		cin >> distance_a_b;
		cout << "расстояние между пунктами В и С в км: " << endl;
		cin >> distance_b_c;
		if (weight > 0 && weight <= 500)
		{
			liter = 1;
			int distance_a_c = plane_fuel / liter;
			if (distance_a_b > distance_a_c)
			{
				int res = distance_a_b - distance_a_c;
				cout << "Вы не сможете долететь до пункта B! Необходимо литров: " << res << endl;
			}
			else if (distance_a_c >= distance_a_b)
			{
				int res = plane_fuel - (distance_a_c - distance_b_c);
				if (distance_a_c < distance_b_c)
				{
					cout << "Недостаточно топлива для полета до С! Необходимо литров: " << plane_fuel - res << endl;
				}
				else {
					cout << "Вы можете летать до точки C" << endl;
				}
			}
		}

		if (weight > 500 && weight <= 1000)
		{
			liter = 4;
			int distance_a_c = plane_fuel / liter;
			if (distance_a_b > distance_a_c)
			{
				int res = distance_a_b - distance_a_c;
				cout << "Вы не сможете долететь до пункта B! Необходимо литров: " << res << endl;
			}
			else if (distance_a_c >= distance_a_b)
			{
				int res = plane_fuel - (distance_a_c - distance_b_c);
				if (distance_a_c < distance_b_c)
				{
					cout << "Недостаточно топлива для полета до С! Необходимо литров: " << plane_fuel - res << endl;
				}
				else {
					cout << "Вы можете летать до точки C" << endl;
				}
			}
		}

		if (weight > 1000 && weight <= 1500)
		{
			liter = 7;
			int distance_a_c = plane_fuel / liter;
			if (distance_a_b > distance_a_c)
			{
				int res = distance_a_b - distance_a_c;
				cout << "Вы не сможете долететь до пункта B! Необходимо литров: " << res << endl;
			}
			else if (distance_a_c >= distance_a_b)
			{
				int res = plane_fuel - (distance_a_c - distance_b_c);
				if (distance_a_c < distance_b_c)
				{
					cout << "Недостаточно топлива для полета до С! Необходимо литров: " << plane_fuel - res << endl;
				}
				else {
					cout << "Вы можете летать до точки C" << endl;
				}
			}
		}

		if (weight > 1500 && weight <= 2000)
		{
			liter = 9;
			int distance_a_c = plane_fuel / liter;
			if (distance_a_b > distance_a_c)
			{
				int res = distance_a_b - distance_a_c;
				cout << "Вы не сможете долететь до пункта B! Необходимо литров: " << res << endl;
			}
			else if (distance_a_c >= distance_a_b)
			{
				int res = plane_fuel - (distance_a_c - distance_b_c);
				if (distance_a_c < distance_b_c)
				{
					cout << "Недостаточно топлива для полета до С! Необходимо литров: " << plane_fuel - res << endl;
				}
				else {
					cout << "Вы можете летать до точки C" << endl;
				}
			}
		}

		if (weight > 2000)
		{
			cout << "более 2000 кг — самолет не поднимает!" << endl;
		}











	}
}