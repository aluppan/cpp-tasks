#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	//1
	for (int i = 1; i <= 7; i++)
	{
		if (i == 1 || i == 7)
			for (int j = 1; j <= 7; j++)
			{
				cout << " + ";
			}
		else
		{
			cout << " * ";
			for (int j = 1; j <= (7 - 2); j++)
			{
				cout << "   ";
			}
			cout << " * ";
		}
		cout << endl;
	}

	//2
	cout << endl << "----------------" << endl;
	cout << endl << endl;
	for (int i = 1; i <= 7; i++)
	{
		if (i == 1 || i == 4 || i == 7)
			for (int j = 1; j <= 7; j++)
			{
				cout << " + ";
			}
		else
		{
			cout << " * ";
			for (int j = 1; j <= (7 - 2); j++)
			{
				cout << "   ";
			}
			cout << " * ";
		}
		cout << endl;
	}

	//3
	cout << endl << "----------------" << endl;
	cout << endl << endl;
	for (int i = 1; i <= 7; i++)
	{
		if (i == 1 || i == 7)
			for (int j = 1; j <= 7; j++)
			{
				cout << " * ";
			}
		else
		{
			cout << " * ";
			for (int j = 1; j <= (7 - 2); j++)
			{
				if (j == 3)
				{
					cout << "   *  ";
				}
				cout << "  ";
			}
			cout << "*  ";
		}
		cout << endl;
	}

	//4
	cout << endl << "----------------" << endl;
	cout << endl << endl;
	for (int i = 0; i <= 11; i++)
	{
		for (int j = 0; j <= 11; j++)
		{
			if (i <= j && i <= 11 - 1 - j)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}

	//5
	cout << endl << "----------------" << endl;
	cout << endl;
	for (int i = 0; i <= 11; i++)
	{
		for (int j = 0; j <= 11; j++)
		{
			if (i >= j && i >= 11 - 1 - j)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}

	//6
	cout << endl << "----------------" << endl;
	cout << endl << endl;
	for (int i = 0; i <= 9; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			if (i >= j && i >= 9 - 1 - j)
			{
				cout << "*";
			}
			else if (i <= j && i <= 9 - 1 - j)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}

	//7
	cout << endl << "----------------" << endl;
	cout << endl << endl;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	//8
	cout << endl << "----------------" << endl;
	cout << endl << endl;
	for (int i = 9; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	//9
	cout << endl << "----------------" << endl;
	cout << endl << endl;
	for (int i = 0; i <= 13; i++)
	{
		for (int j = 0; j <= 13; j++)
		{
			if (i >= j && i <= 13 - 1 - j)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
}