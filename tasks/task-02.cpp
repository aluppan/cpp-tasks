#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
    {
        //Задание 1
        int start_hour, sec, start_sec, start_min, end_hour, end_min, end_sec;
        cout << "время в секундах, прошедшее с начала дня: ";
        cin >> sec;
        start_hour = sec / 3600;
        start_min = (sec - start_hour * 3600) / 60;
        start_sec = sec - start_hour * 3600 - start_min * 60;
        cout << "сейчас: " << start_hour << " часов " << start_min << " минут " << start_sec << " секунд " << endl;
        sec = 86400 - sec;
        end_hour = sec / 3600;
        end_min = (sec - end_hour * 3600) / 60;
        end_sec = sec - end_hour * 3600 - end_min * 60;
        cout << "до конца дня: " << end_hour << " часов " << end_min << " минут " << end_sec << " секунд " << endl;
    }

    {
        //Задание 2
        int work_hour, task2_sec;
        cout << "время в секундах, прошедшее с начала рабочего дня: ";
        cin >> task2_sec;
        task2_sec = 28800 - task2_sec;
        work_hour = task2_sec / 3600;
        cout << "до конца рабочего дня осталось: " << work_hour << " часа" << endl;

    }
}