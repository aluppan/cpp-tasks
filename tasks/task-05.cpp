#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	//{
	//	//Задание 1 - https://upload.wikimedia.org/wikipedia/commons/thumb/7/7b/Ascii_Table-nocolor.svg/1000px-Ascii_Table-nocolor.svg.png
	//	char symbol;
	//	cout << "Введите символ: ";
	//	cin >> symbol;

	//	if (symbol >= 48 && symbol <= 57)
	//	{
	//		cout << "Цифра" << endl;
	//	}
	//	else if (symbol >= 65 && symbol <= 90 || symbol >= 97 && symbol <= 122)
	//	{
	//		cout << "Буква" << endl;
	//	}
	//	else if (symbol >= 35 && symbol <= 38 || symbol >= 42 && symbol <= 43 || symbol == 45 || symbol == 47 || symbol >= 60 && symbol <= 62 || symbol >= 91 && symbol <= 95)
	//	{
	//		cout << "Математический знак" << endl;
	//	}
	//	else
	//	{
	//		cout << "Знак препинания" << endl;
	//	}
	//}

	//{
	//	//Задание 2
	//	float call_cost, time;
	//	int your_operator, his_operator, time2;

	//	cout << "Введите длительность разговора (мин. сек) = ";
	//	cin >> time;
	//	time2 = (int)time;
	//	time -= time2;
	//	time2 = (time * 100) + (time2 * 60);
	//	cout << "Какой у вас оператор? " << endl;
	//	cout << "Нажмите 1, чтобы выбрать Bakcell" << endl;
	//	cout << "Нажмите 2, чтобы выбрать Azercell" << endl;
	//	cout << "Нажмите 3, чтобы выбрать Nar" << endl;
	//	cin >> your_operator;
	//	if (your_operator < 1 || your_operator > 3)
	//	{
	//		cout << "Введите от 1 до 3!" << endl;
	//		return 0;
	//	}
	//	cout << "На какой оператор вы звоните? " << endl;
	//	cout << "Нажмите 1, чтобы выбрать Bakcell" << endl;
	//	cout << "Нажмите 2, чтобы выбрать Azercell" << endl;
	//	cout << "Нажмите 3, чтобы выбрать Nar" << endl;
	//	cin >> his_operator;
	//	if (his_operator < 1 || his_operator > 3 || your_operator < 1 || your_operator > 3)
	//	{
	//		cout << "Введите от 1 до 3!" << endl;
	//		return 0;
	//	}

	//	if (your_operator == 1 && his_operator == 1)
	//	{
	//		call_cost = (time2 * 0.05) / 60;
	//	}		
	//	else if (your_operator == 1 && his_operator == 2)
	//	{
	//		call_cost = (time2 * 0.07) / 60;
	//	}
	//	else if (your_operator == 1 && his_operator == 3)
	//	{
	//		call_cost = (time2 * 0.09) / 60;
	//	}

	//	if (your_operator == 2 && his_operator == 2)
	//	{
	//		call_cost = (time2 * 0.05) / 60;
	//	}		
	//	else if (your_operator == 2 && his_operator == 1)
	//	{
	//		call_cost = (time2 * 0.07) / 60;
	//	}		
	//	else if (your_operator == 2 && his_operator == 3)
	//	{
	//		call_cost = (time2 * 0.09) / 60;
	//	}	
	//	
	//	if (your_operator == 3 && his_operator == 3)
	//	{
	//		call_cost = (time2 * 0.05) / 60;
	//	}
	//	else if (your_operator == 3 && his_operator == 1)
	//	{
	//		call_cost = (time2 * 0.09) / 60;
	//	}
	//	else if (your_operator == 3 && his_operator == 2)
	//	{
	//		call_cost = (time2 * 0.09) / 60;
	//	}
	//	cout << "Стоимость разговора = " << call_cost << " AZN" << endl;
	//}

	{
		//Задание 3
		int option;
		const int price_vasya = 50, fine_vasya = 20, code_lines = 100;
		cout << "Меню: " << endl;
		cout << "Нажмите 1" << endl;
		cout << "Нажмите 2" << endl;
		cout << "Нажмите 3" << endl;
		cin >> option;
		if (option < 1 || option > 3)
		{
			cout << "Введите от 1 до 3!" << endl;
			return 0;
		}
		else if (option == 1)
		{
			float new_price;
			int code, new_fine;
			cout << "Введите желаемый доход Васи: ";
			cin >> new_price;
			cout << "Количество опозданий: ";
			cin >> new_fine;
			code = (new_price * code_lines) / price_vasya;
			new_fine = (new_fine / 3) * fine_vasya;
			code = code + new_fine;
			cout << "Надо написать " << code << " строк кода" << endl;
		}
		else if (option == 2)
		{
			float new_price;
			int new_code, new_fine;
			cout << "Введите количество строк кода: ";
			cin >> new_code; 
			cout << "Введите желаемый объем зарплаты: ";
			cin >> new_price;
			new_fine = (new_code / 2 - new_price) / 20;
			if (new_fine <= 0)
			{
				cout << "Опозданий не будет" << endl;
			}
			else
			{
				cout << "Количество опозданий Васи: " << new_fine << endl;

			}
		}
		else if (option == 3)
		{
			int new_code, new_fine;
			float new_price;
			cout << "Введите количество строк кода: ";
			cin >> new_code;
			cout << "Количество опозданий: ";
			cin >> new_fine;
			new_price = (new_code * price_vasya) / code_lines;
			new_fine = (new_fine / 3) * fine_vasya;
			new_price = new_price - new_fine;
			if (new_price <= 0) 
			{
				cout << "Васе не заплатят" << endl;
			}
			else
			{
				cout << "Васе заплатят: " << new_price << endl;
			}
		}
	}

}