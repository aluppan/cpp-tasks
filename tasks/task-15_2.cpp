#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int day_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int first_day, second_day;
	int first_month, second_month;
	int first_year, second_year;
	int year_difference, day_difference;
	int day_total, month_total;
	int year_1 = 365;

	cout << "Первый день: ";
	cin >> first_day;
	if (first_day > 31 || first_day <= 0)
	{
		cout << "Неправильный день" << endl;
	}
	cout << "Первый месяц: ";
	cin >> first_month;
	if (first_month > 12 || first_month <= 0)
	{
		cout << "Неправильный месяц" << endl;
	}
	cout << "Первый год: ";
	cin >> first_year;
	if (first_year > 9999 || first_year < 0)
	{
		cout << "Неправильный год" << endl;
	}

	cout << "Второй день: ";
	cin >> second_day;
	if (second_day > 31 || second_day <= 0)
	{
		cout << "Неправильный день" << endl;
	}
	cout << "Второй месяц: ";
	cin >> second_month;
	if (second_month > 12 || second_month <= 0)
	{
		cout << "Неправильный месяц" << endl;
	}
	cout << "Второй год: ";
	cin >> second_year;
	if (second_year > 9999 || second_year < 0)
	{
		cout << "Неправильный год" << endl;
	}

	if (first_year == second_year)
	{
		year_difference = 0;
	}
	else
	{
		if (first_year % 4 == 0 && first_year % 100 != 0 || first_year % 400 == 0)
		{
			if (second_year % 4 == 0 && second_year % 100 != 0 || second_year % 400 == 0)
			{
				if (first_year > second_year)
				{
					year_difference = (first_year - second_year) * (year_1)+2;
				}
				else
				{
					year_difference = (second_year - first_year) * (year_1)+2;
				}
				if (second_month > first_month)
				{
					if (day_month[first_month - 1] > day_month[1])
					{
						--year_difference;
					}
				}
			}
			else
			{
				if (first_year > second_year)
				{
					year_difference = (first_year - second_year) * (year_1)+1;
				}
				else
				{
					year_difference = (second_year - first_year) * (year_1)+1;
				}
				if (first_month > second_month)
				{
					if (day_month[second_month - 1] > day_month[1])
					{
						--year_difference;
					}
				}
			}
		}
		else
		{
			if (first_year > second_year)
			{
				year_difference = (first_year - second_year) * (year_1);
			}
			else
			{
				year_difference = (second_year - first_year) * (year_1);
			}
		}
	}

	if (first_month == second_month)
	{
		month_total = 0;
	}
	else
	{
		if (first_month > second_month)
		{
			for (int i = (first_month - 1); i > (second_month - 1); i--)
			{
				int months_total_temp = 0;
				months_total_temp += day_month[i];
				month_total = months_total_temp;
			}
		}
		else
		{
			for (int i = (first_month - 1); i < (second_month - 1); i++)
			{
				int months_total_temp = 0;
				months_total_temp += day_month[i];
				month_total = months_total_temp;
			}
		}
	}

	if (first_day == second_day)
	{
		day_difference = 0;
		day_total = (year_difference + month_total) - day_difference;
	}
	else
	{
		if (first_day > second_day)
		{
			day_difference = first_day - second_day;
			day_total = (year_difference + month_total) - day_difference;
		}
		else
		{
			day_difference = second_day - first_day;
			day_total = (year_difference + month_total) + day_difference;
		}
	}

	if (first_year == second_year)
	{
	}
	else
	{
		if (first_year > second_year)
		{
			for (int i = (second_year + 1); i < first_year; i++)
			{
				if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
				{
					cout << endl;
					cout << "Високосный год = " << i << endl;
					++day_total;
				}
			}
		}
		else
		{
			for (int i = (first_year + 1); i < second_year; i++)
			{
				if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
				{
					cout << endl;
					cout << "Високосный год = " << i << endl;
					++day_total;
				}
			}
		}
	}

	cout << endl << "Общее количество дней между датами = " << day_total << endl;


}
