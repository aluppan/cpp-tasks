#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    {
        cout << "Задание 1\n" << endl;
        float task1_number1, task1_number2;
        cout << "Введите 1 число - ";
        cin >> task1_number1;
        cout << "Введите 2 число - ";
        cin >> task1_number2;
        cout << "Сумма - " << task1_number1 + task1_number2 << endl;
        cout << "Произведение - " << task1_number1 * task1_number2 << endl;
        cout << "Среднее арифметическое - " << (task1_number1 + task1_number2) / 2 << endl;
    }

    {
        cout << "\nЗадание 2\n" << endl;
        float task2_number1, task2_number2, task2_number3;
        cout << "Введите 1 число - ";
        cin >> task2_number1;
        cout << "Введите 2 число - ";
        cin >> task2_number2;
        cout << "Введите 3 число - ";
        cin >> task2_number3;
        cout << "Сумма - " << task2_number1 + task2_number2 + task2_number3 << endl;
        cout << "Произведение - " << task2_number1 * task2_number2 * task2_number3 << endl;
        cout << "Среднее арифметическое - " << (task2_number1 + task2_number2 + task2_number3) / 3 << endl;
    }

    {
        cout << "\nЗадание 3\n" << endl;
        float notebook_price, notebook_number, notebook_percent, final_price;
        cout << "стоимость одного ноутбука - ";
        cin >> notebook_price;
        cout << "количество - ";
        cin >> notebook_number;
        cout << "процент скидки - ";
        cin >> notebook_percent;
        final_price = notebook_price * notebook_number;
        final_price = ((final_price * notebook_percent) / 100) + final_price;
        cout << "общая сумма заказа: " << final_price << endl;
    }

    {
        cout << "\nзадание 4\n" << endl;
        float sum, price, percent = 0.05;
        cout << "общая сумма заказа: ";
        cin >> sum;
        price = sum * percent + 100;
        cout << "итоговая зарплата: " << price << "$" << endl;
    }

    {
        cout << "\nЗадание 5\n";
        int film_gb, res, bit, hour, min, sec;
        cout << "размер файла в гигабайтах: ";
        cin >> film_gb;
        //film_gb = film_gb * 1048576;
        film_gb = film_gb * 1024 * 8;
        cout << "скорость интернет-соединения в битах: ";
        cin >> bit;
        res = film_gb / bit;
        cout << res << " секунд" << endl;
        hour = res / 3600;
        min = (res - hour * 3600) / 60;
        sec = res - hour * 3600 - min * 60;
        cout << "фильм скачается за: ";
        cout << hour << " часов " << min << " минут " << sec << " секунд " << endl;
    }
}