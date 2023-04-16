#include <iostream>

using namespace std;

int main()
{
	//Задание 1
	setlocale(LC_ALL, "ru");
	cout << "0 = Черный  8 = Серый" << endl;
	cout << "1 = Синий   9 = Светло-синий" << endl;
	cout << "2 = Зеленый A = Светло-зеленый" << endl;
	cout << "3 = Голубой B = Светло-голубой" << endl;
	cout << "4 = Красный C = Светло-красный" << endl;
	cout << "5 = Лиловый D = Светло-лиловый" << endl;
	cout << "6 = Желтый  E = Светло-желтый" << endl;
	cout << "7 = Белый   F = Ярко-белый" << endl;
	char console1, console2;
	cin >> console1 >> console2;
	switch (console1)
	{
		case '0':
			switch (console2)
			{
			case '1':
				system("color 01");
				break;
			case '2':
				system("color 02");
				break;
			case '3':
				system("color 03");
				break;
			case '4':
				system("color 04");
				break;
			case '5':
				system("color 05");
				break;
			case '6':
				system("color 06");
				break;
			case '7':
				system("color 07");
				break;
			case '8':
				system("color 08");
				break;
			case '9':
				system("color 09");
				break;
			case 'a':
			case 'A':
				system("color 0A");
				break;
			case 'b':
			case 'B':
				system("color 0B");
				break;
			case 'c':
			case 'C':
				system("color 0C");
				break;
			case 'd':
			case 'D':
				system("color 0D");
				break;
			case 'e':
			case 'E':
				system("color 0E");
				break;
			case 'f':
			case 'F':
				system("color 0F");
				break;
			}
			break;
		case '1':
			switch (console2)
			{
			case '0':
				system("color 10");
				break;
			case '2':
				system("color 12");
				break;
			case '3':
				system("color 13");
				break;
			case '4':
				system("color 14");
				break;
			case '5':
				system("color 15");
				break;
			case '6':
				system("color 16");
				break;
			case '7':
				system("color 17");
				break;
			case '8':
				system("color 18");
				break;
			case '9':
				system("color 19");
				break;
			case 'a':
			case 'A':
				system("color 1A");
				break;
			case 'b':
			case 'B':
				system("color 1B");
				break;
			case 'c':
			case 'C':
				system("color 1C");
				break;
			case 'd':
			case 'D':
				system("color 1D");
				break;
			case 'e':
			case 'E':
				system("color 1E");
				break;
			case 'f':
			case 'F':
				system("color 1F");
				break;
			}
			break;
		case '2':
			switch (console2)
			{
			case '0':
				system("color 20");
				break;
			case '1':
				system("color 21");
				break;
			case '3':
				system("color 23");
				break;
			case '4':
				system("color 24");
				break;
			case '5':
				system("color 25");
				break;
			case '6':
				system("color 26");
				break;
			case '7':
				system("color 27");
				break;
			case '8':
				system("color 28");
				break;
			case '9':
				system("color 29");
				break;
			case 'a':
			case 'A':
				system("color 2A");
				break;
			case 'b':
			case 'B':
				system("color 2B");
				break;
			case 'c':
			case 'C':
				system("color 2C");
				break;
			case 'd':
			case 'D':
				system("color 2D");
				break;
			case 'e':
			case 'E':
				system("color 2E");
				break;
			case 'f':
			case 'F':
				system("color 2F");
				break;
			}
			break;
		case '3':
			switch (console2)
			{
			case '0':
				system("color 30");
				break;
			case '1':
				system("color 31");
				break;
			case '2':
				system("color 32");
				break;
			case '4':
				system("color 34");
				break;
			case '5':
				system("color 35");
				break;
			case '6':
				system("color 36");
				break;
			case '7':
				system("color 37");
				break;
			case '8':
				system("color 38");
				break;
			case '9':
				system("color 39");
				break;
			case 'a':
			case 'A':
				system("color 3A");
				break;
			case 'b':
			case 'B':
				system("color 3B");
				break;
			case 'c':
			case 'C':
				system("color 3C");
				break;
			case 'd':
			case 'D':
				system("color 3D");
				break;
			case 'e':
			case 'E':
				system("color 3E");
				break;
			case 'f':
			case 'F':
				system("color 3F");
				break;
			}
			break;
		case '4':
			switch (console2)
			{
			case '0':
				system("color 40");
				break;
			case '1':
				system("color 41");
				break;
			case '2':
				system("color 42");
				break;
			case '3':
				system("color 43");
				break;
			case '5':
				system("color 45");
				break;
			case '6':
				system("color 46");
				break;
			case '7':
				system("color 47");
				break;
			case '8':
				system("color 48");
				break;
			case '9':
				system("color 49");
				break;
			case 'a':
			case 'A':
				system("color 4A");
				break;
			case 'b':
			case 'B':
				system("color 4B");
				break;
			case 'c':
			case 'C':
				system("color 4C");
				break;
			case 'd':
			case 'D':
				system("color 4D");
				break;
			case 'e':
			case 'E':
				system("color 4E");
				break;
			case 'f':
			case 'F':
				system("color 4F");
				break;
			}
			break;
		case '5':
			switch (console2)
			{
			case '0':
				system("color 50");
				break;
			case '1':
				system("color 51");
				break;
			case '2':
				system("color 52");
				break;
			case '3':
				system("color 53");
				break;
			case '4':
				system("color 54");
				break;
			case '6':
				system("color 56");
				break;
			case '7':
				system("color 57");
				break;
			case '8':
				system("color 58");
				break;
			case '9':
				system("color 59");
				break;
			case 'a':
			case 'A':
				system("color 5A");
				break;
			case 'b':
			case 'B':
				system("color 5B");
				break;
			case 'c':
			case 'C':
				system("color 5C");
				break;
			case 'd':
			case 'D':
				system("color 5D");
				break;
			case 'e':
			case 'E':
				system("color 5E");
				break;
			case 'f':
			case 'F':
				system("color 5F");
				break;
			}
			break;
		case '6':
			switch (console2)
			{
			case '0':
				system("color 60");
				break;
			case '1':
				system("color 61");
				break;
			case '2':
				system("color 62");
				break;
			case '3':
				system("color 63");
				break;
			case '4':
				system("color 64");
				break;
			case '5':
				system("color 65");
				break;
			case '7':
				system("color 67");
				break;
			case '8':
				system("color 68");
				break;
			case '9':
				system("color 69");
				break;
			case 'a':
			case 'A':
				system("color 6A");
				break;
			case 'b':
			case 'B':
				system("color 6B");
				break;
			case 'c':
			case 'C':
				system("color 6C");
				break;
			case 'd':
			case 'D':
				system("color 6D");
				break;
			case 'e':
			case 'E':
				system("color 6E");
				break;
			case 'f':
			case 'F':
				system("color 6F");
				break;
			}
			break;
		case '7':
			switch (console2)
			{
			case '0':
				system("color 70");
				break;
			case '1':
				system("color 71");
				break;
			case '2':
				system("color 72");
				break;
			case '3':
				system("color 73");
				break;
			case '4':
				system("color 74");
				break;
			case '5':
				system("color 75");
				break;
			case '6':
				system("color 76");
				break;
			case '8':
				system("color 78");
				break;
			case '9':
				system("color 79");
				break;
			case 'a':
			case 'A':
				system("color 7A");
				break;
			case 'b':
			case 'B':
				system("color 7B");
				break;
			case 'c':
			case 'C':
				system("color 7C");
				break;
			case 'd':
			case 'D':
				system("color 7D");
				break;
			case 'e':
			case 'E':
				system("color 7E");
				break;
			case 'f':
			case 'F':
				system("color 7F");
				break;
			}
			break;
		case '8':
			switch (console2)
			{
			case '0':
				system("color 80");
				break;
			case '1':
				system("color 81");
				break;
			case '2':
				system("color 82");
				break;
			case '3':
				system("color 83");
				break;
			case '4':
				system("color 84");
				break;
			case '5':
				system("color 85");
				break;
			case '6':
				system("color 86");
				break;
			case '7':
				system("color 87");
				break;
			case '9':
				system("color 89");
				break;
			case 'a':
			case 'A':
				system("color 8A");
				break;
			case 'b':
			case 'B':
				system("color 8B");
				break;
			case 'c':
			case 'C':
				system("color 8C");
				break;
			case 'd':
			case 'D':
				system("color 8D");
				break;
			case 'e':
			case 'E':
				system("color 8E");
				break;
			case 'f':
			case 'F':
				system("color 8F");
				break;
			}
			break;
		case '9':
			switch (console2)
			{
			case '0':
				system("color 90");
				break;
			case '1':
				system("color 91");
				break;
			case '2':
				system("color 92");
				break;
			case '3':
				system("color 93");
				break;
			case '4':
				system("color 94");
				break;
			case '5':
				system("color 95");
				break;
			case '6':
				system("color 96");
				break;
			case '7':
				system("color 97");
				break;
			case '8':
				system("color 98");
				break;
			case 'a':
			case 'A':
				system("color 9A");
				break;
			case 'b':
			case 'B':
				system("color 9B");
				break;
			case 'c':
			case 'C':
				system("color 9C");
				break;
			case 'd':
			case 'D':
				system("color 9D");
				break;
			case 'e':
			case 'E':
				system("color 9E");
				break;
			case 'f':
			case 'F':
				system("color 9F");
				break;
			}
			break;
		case 'a':
		case 'A':
			switch (console2)
			{
			case '0':
				system("color A0");
				break;
			case '1':
				system("color A1");
				break;
			case '2':
				system("color A2");
				break;
			case '3':
				system("color A3");
				break;
			case '4':
				system("color A4");
				break;
			case '5':
				system("color A5");
				break;
			case '6':
				system("color A6");
				break;
			case '7':
				system("color A7");
				break;
			case '8':
				system("color A8");
				break;
			case '9':
				system("color A9");
				break;
			case 'b':
			case 'B':
				system("color AB");
				break;
			case 'c':
			case 'C':
				system("color AC");
				break;
			case 'd':
			case 'D':
				system("color AD");
				break;
			case 'e':
			case 'E':
				system("color AE");
				break;
			case 'f':
			case 'F':
				system("color AF");
				break;
			}
			break;
		case 'b':
		case 'B':
			switch (console2)
			{
			case '0':
				system("color B0");
				break;
			case '1':
				system("color B1");
				break;
			case '2':
				system("color B2");
				break;
			case '3':
				system("color B3");
				break;
			case '4':
				system("color B4");
				break;
			case '5':
				system("color B5");
				break;
			case '6':
				system("color B6");
				break;
			case '7':
				system("color B7");
				break;
			case '8':
				system("color B8");
				break;
			case '9':
				system("color B9");
				break;
			case 'a':
			case 'A':
				system("color BA");
				break;
			case 'c':
			case 'C':
				system("color BC");
				break;
			case 'd':
			case 'D':
				system("color BD");
				break;
			case 'e':
			case 'E':
				system("color BE");
				break;
			case 'f':
			case 'F':
				system("color BF");
				break;
			}
			break;
		case 'c':
		case 'C':
			switch (console2)
			{
			case '0':
				system("color C0");
				break;
			case '1':
				system("color C1");
				break;
			case '2':
				system("color C2");
				break;
			case '3':
				system("color C3");
				break;
			case '4':
				system("color C4");
				break;
			case '5':
				system("color C5");
				break;
			case '6':
				system("color C6");
				break;
			case '7':
				system("color C7");
				break;
			case '8':
				system("color C8");
				break;
			case '9':
				system("color C9");
				break;
			case 'a':
			case 'A':
				system("color CA");
				break;
			case 'b':
			case 'B':
				system("color CB");
				break;
			case 'd':
			case 'D':
				system("color CD");
				break;
			case 'e':
			case 'E':
				system("color CE");
				break;
			case 'f':
			case 'F':
				system("color CF");
				break;
			}
			break;
		case 'd':
		case 'D':
			switch (console2)
			{
			case '0':
				system("color D0");
				break;
			case '1':
				system("color D1");
				break;
			case '2':
				system("color D2");
				break;
			case '3':
				system("color D3");
				break;
			case '4':
				system("color D4");
				break;
			case '5':
				system("color D5");
				break;
			case '6':
				system("color D6");
				break;
			case '7':
				system("color D7");
				break;
			case '8':
				system("color D8");
				break;
			case '9':
				system("color D9");
				break;
			case 'a':
			case 'A':
				system("color DA");
				break;
			case 'b':
			case 'B':
				system("color DB");
				break;
			case 'c':
			case 'C':
				system("color DC");
				break;
			case 'e':
			case 'E':
				system("color DE");
				break;
			case 'f':
			case 'F':
				system("color DF");
				break;
			}
			break;
		case 'e':
		case 'E':
			switch (console2)
			{
			case '0':
				system("color E0");
				break;
			case '1':
				system("color E1");
				break;
			case '2':
				system("color E2");
				break;
			case '3':
				system("color E3");
				break;
			case '4':
				system("color E4");
				break;
			case '5':
				system("color E5");
				break;
			case '6':
				system("color E6");
				break;
			case '7':
				system("color E7");
				break;
			case '8':
				system("color E8");
				break;
			case '9':
				system("color E9");
				break;
			case 'a':
			case 'A':
				system("color EA");
				break;
			case 'b':
			case 'B':
				system("color EB");
				break;
			case 'c':
			case 'C':
				system("color EC");
				break;
			case 'd':
			case 'D':
				system("color ED");
				break;
			case 'f':
			case 'F':
				system("color EF");
				break;
			}
			break;
		case 'f':
		case 'F':
			switch (console2)
			{
			case '0':
				system("color F0");
				break;
			case '1':
				system("color F1");
				break;
			case '2':
				system("color F2");
				break;
			case '3':
				system("color F3");
				break;
			case '4':
				system("color F4");
				break;
			case '5':
				system("color F5");
				break;
			case '6':
				system("color F6");
				break;
			case '7':
				system("color F7");
				break;
			case '8':
				system("color F8");
				break;
			case '9':
				system("color F9");
				break;
			case 'a':
			case 'A':
				system("color FA");
				break;
			case 'b':
			case 'B':
				system("color FB");
				break;
			case 'c':
			case 'C':
				system("color FC");
				break;
			case 'd':
			case 'D':
				system("color FD");
				break;
			case 'e':
			case 'E':
				system("color FE");
				break;
			}
			break;
		default:
			cout << "неправильно" << endl;
	}
	//Задание 2
	int number, op;
	cout << "Введите число: ";
	cin >> number;
	cout << "Нажмите 1, чтобы возвести введенное число в 0 степень" << endl;
	cout << "Нажмите 2, чтобы возвести введенное число в 1 степень" << endl;
	cout << "Нажмите 3, чтобы возвести введенное число в 2 степень" << endl;
	cout << "Нажмите 4, чтобы возвести введенное число в 3 степень" << endl;
	cout << "Нажмите 5, чтобы возвести введенное число в 4 степень" << endl;
	cout << "Нажмите 6, чтобы возвести введенное число в 5 степень" << endl;
	cout << "Нажмите 7, чтобы возвести введенное число в 6 степень" << endl;
	cout << "Нажмите 8, чтобы возвести введенное число в 7 степень" << endl;
	cout << "Выберите степень: ";
	cin >> op;
	switch (op)
	{
		case 1:
			cout << 1;
			break;
		case 2:
			cout << number;
			break;
		case 3:
			cout << number * number;
			break;
		case 4:
			cout << number * number * number;
			break;
		case 5:
			cout << number * number * number * number;
			break;
		case 6:
			cout << number * number * number * number * number;
			break;
		case 7:
			cout << number * number * number * number * number * number;
			break;
		case 8:
			cout << number * number * number * number * number * number * number;
			break;
	}
}