#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	//{
	//	// Задание 1
	//	int number, del_num, amount_num = 0, sum_num = 0, zero_num = 0;
	//	cout << "Введите число: ";
	//	cin >> number;
	//	for (zero_num = 0; number > 0; amount_num++)
	//	{
	//		del_num = number % 10;
	//		if (del_num == 0)
	//		{
	//			zero_num++;
	//		}
	//		number /= 10;
	//		sum_num += del_num;
	//	}
	//	cout << "Количество цифр: " << amount_num << endl;
	//	cout << "Количество нулей в числе: " << zero_num << endl;
	//	cout << "Сумма цифр: " << sum_num << endl;
	//	cout << "Среднее арифметическое: " << (float)sum_num / (float)amount_num << endl;
	//}

	{
		// Задание 2
		int height, width, size;
		cout << "введите высоту шахматной доски: ";
		cin >> height;
		cout << "введите ширину шахматной доски: ";
		cin >> width;
		cout << "введите размер клеточки: ";
		cin >> size;
		for (int i = 0; i < height; i++)
		{
			for (int j2 = 0; j2 < size; j2++)
			{
				for (int j = 0; j < width; j++)
				{
					for (int i2 = 0; i2 < size; i2++)
					{
						if ((i + j) % 2)
						{
							(cout << "[ ]");
						}
						else
						{
							(cout << "[X]");
						}
					}
				}
				cout << endl;
			}
		}
	}

	/*{
		// Задание 3
		const double tea = 1.50, cofe = 2, rulet = 3.20, vafli = 2.50, pecenie = 4.40, pirog = 5;
		double sum = 0;
		int zakaz, menu, i = 1, amount_tea, amount_cofe, amount_rulet, amount_vafli, amount_pecenie, amount_pirog;
		cout << "На сколько человек заказ: ";
		cin >> zakaz;
		do
		{
			cout << endl << "Заказ для " << i << " клиента:" << endl;
			cout << "1. Чай = " << tea << endl;
			cout << "2. Кофе = " << cofe << endl;
			cout << "3. Рулет = " << rulet << endl;
			cout << "4. Вафли = " << vafli << endl;
			cout << "5. Печенье = " << pecenie << endl;
			cout << "6. Пирог = " << pirog << endl;
			cout << "7. Закончить заказ для " << i << " клиента" << endl;
			cout << endl << "Выберите что хотите заказать: ";
			cin >> menu;
			switch (menu)
			{
			case 1:
			{
				cout << "Сколько чая: ";
				cin >> amount_tea;
				sum = sum + amount_tea * tea;
				break;
			}
			case 2:
			{
				cout << "Сколько кофе: ";
				cin >> amount_cofe;
				sum = sum + amount_cofe * cofe;
				break;
			}
			case 3:
			{
				cout << "Сколько рулетов: ";
				cin >> amount_rulet;
				sum = sum + amount_rulet * rulet;
				break;
			}
			case 4:
			{
				cout << "Сколько вафель: ";
				cin >> amount_vafli;
				sum = sum + amount_vafli * vafli;
				break;
			}
			case 5:
			{
				cout << "Сколько печенья: ";
				cin >> amount_pecenie;
				sum = sum + amount_pecenie * pecenie;
				break;
			}
			case 6:
			{
				cout << "Сколько пирога: ";
				cin >> amount_pirog;
				sum = sum + amount_pirog * pirog;
				break;
			}
			case 7:
			{
				i++;
				break;
			}
			}
		} while (i <= zakaz);
		cout << "Суммарная стоимость товаров: " << sum << endl;
	}*/

}
