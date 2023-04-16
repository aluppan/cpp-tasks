#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	{
		int manager1_sales, manager2_sales, manager3_sales, max, manager_salary = 200;
		cout << "Уровень продаж для менеджера Обама: ";
		cin >> manager1_sales;
		cout << "Уровень продаж для менеджера Путин: ";
		cin >> manager2_sales;
		cout << "Уровень продаж для менеджера Меркель: ";
		cin >> manager3_sales;
		if (manager1_sales < 500)
		{
			manager1_sales = manager1_sales * 0.03 + manager_salary;
		}
		else if (manager1_sales > 500 && manager1_sales < 1000)
		{
			manager1_sales = manager1_sales * 0.05 + manager_salary;
		}
		else if (manager1_sales > 1000)
		{
			manager1_sales = manager1_sales * 0.08 + manager_salary;
		}

		if (manager2_sales < 500)
		{
			manager2_sales = manager2_sales * 0.03 + manager_salary;
		}
		else if (manager2_sales > 500 && manager2_sales < 1000)
		{
			manager2_sales = manager2_sales * 0.05 + manager_salary;
		}
		else if (manager2_sales > 1000)
		{
			manager2_sales = manager2_sales * 0.08 + manager_salary;
		}

		if (manager3_sales < 500)
		{
			manager3_sales = manager3_sales * 0.03 + manager_salary;
		}
		else if (manager3_sales > 500 && manager3_sales < 1000)
		{
			manager3_sales = manager3_sales * 0.05 + manager_salary;
		}
		else if (manager3_sales > 1000)
		{
			manager3_sales = manager3_sales * 0.08 + manager_salary;
		}
		cout << "Зарплата менеджера Обама: " << manager1_sales << endl;
		cout << "Зарплата менеджера Путин: " << manager2_sales << endl;
		cout << "Зарплата менеджера Меркель: " << manager3_sales << endl;

		max = manager1_sales;
		if (max < manager2_sales)
		{
			max = manager2_sales;
			max += 200;
			cout << "Премию 200$ получает Путин! Общая зарплата: " << max << endl;
		}
		else if (max < manager3_sales)
		{
			max = manager3_sales;
			max += 200;
			cout << "Премию 200$ получает Меркель! Общая зарплата: " << max << endl;
		}
		else
		{
			max = manager1_sales;
			max += 200;
			cout << "Премию 200$ получает Обама! Общая зарплата: " << max << endl;
		}

	}

}