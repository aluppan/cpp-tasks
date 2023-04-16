#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	cout << "Задание 1\n";
	int grivni, grivni2;
	float kopeyki, kopeyki2, sum;
	cout << "Гривны - ";
	cin >> grivni;
	cout << "Копейки - ";
	cin >> kopeyki;
	kopeyki = kopeyki / 100;
	sum = grivni + kopeyki;
	grivni2 = sum;
	kopeyki2 = (sum - grivni2) * 100;
	cout << grivni2 << " грн. " << kopeyki2 << " коп." << endl;

	cout << "\nЗадание 2\n";
	float length, width, height, volume;
	cout << "Вычисление объема параллелепипеда." << endl;
	cout << "Введите исходные данные:" << endl;
	cout << "Длина (см) -> ";
	cin >> length;
	cout << "Ширина (см) -> ";
	cin >> width;
	cout << "Высота (см) -> ";
	cin >> height;
	volume = length * width * height;
	cout << "Объем: " << volume << " см." << endl;

	cout << "\nЗадание 3\n";
	float maps, point, distance;
	cout << "Вычисление расстояния между населенными пунктами" << endl;
	cout << "Введите исходные данные:" << endl;
	cout << "Масштаб карты (количество километров в одном сантиметре) -> ";
	cin >> maps;
	cout << "Расстояние между точками, изображающими населенные пункты (см) -> ";
	cin >> point;
	distance = maps * point;
	cout << "Расстояние между населенными пунктами " << distance << " км." << endl;

	cout << "\nЗадание 4\n";
	double pi(3.14), r, v;
	cout << "Радиус - ";
	cin >> r;
	v = 4 * r * r * r * pi / 3;
	cout << "Объем - " << v;

}