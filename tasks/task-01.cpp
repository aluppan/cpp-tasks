#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	{
		cout << "Задание 1\n";
		int hour, min, sec, s;
		cout << "Bремя в секундах - ";
		cin >> s;
		hour = s / 3600;
		min = (s - hour * 3600) / 60;
		sec = s - hour * 3600 - min * 60;
		cout << hour << " часов " << min << " минут " << sec << " секунд " << endl;
	}

	{
		cout << "\nЗадание 2\n";
		int valuta;
		float kopeyki, cislo;
		cout << "Число - ";
		cin >> cislo;
		valuta = (int)cislo;
		kopeyki = 100 * (cislo - valuta);
		cout << valuta << " грн. " << kopeyki << " коп." << endl;
	}

	{
		cout << "\nЗадание 3\n";
		int time2;
		float time, metr, speed;
		cout << "Вычисление скорости бега" << endl;
		cout << "Введите длину дистанции (метров) = ";
		cin >> metr;
		cout << "Введите время (мин. сек) = ";
		cin >> time;
		time2 = (int)time;
		time -= time2;
		time2 = (time * 100) + (time2 * 60);
		time = (int)time2;
		time = time / 3600;
		speed = (metr / 1000) / time;
		cout << "Дистанция: " << endl;
		cout << "Время: " << time2 << " сек." << endl;
		cout << "Вы бежали со скоростью: " << speed << " км/ч." << endl;
	}

	{
		cout << "\nЗадание 4\n";
		float call_price, total_money, call_time, sec_price, sec;
		cout << "Цена одной минуты - ";
		cin >> call_price;
		cout << "Продолжительность разговора в минутах и секундах - ";
		cin >> call_time;
		sec_price = call_price / 60;
		sec = ((int)(call_time) * 60) + ((call_time * 100) - (int)(call_time) * 100);
		total_money = sec * sec_price;
		cout << total_money << endl;
	}

	{
		cout << "\nЗадание 5\n";
		float days, weeks, total;
		cout << "Введите количество дней - ";
		cin >> days;
		weeks = (int)(days / 7);
		total = days - weeks * 7;
		cout << weeks << " недели " << total << " дня" << endl;
	}
}