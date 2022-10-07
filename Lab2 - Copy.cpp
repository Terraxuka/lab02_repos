// Lab2.cpp
// Мельничук Юліан
// Лабораторна робота № 2.
// Лінійні програми.
// Варіант 18
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a;  // вхідний параметр a
	double z1; // результат обчислення 1-го виразу
	//double z2; // результат обчислення 2-го виразу

	cout << "Input a (a > 0) = "; cin >> a;

	while (a <= 0) { // створюю перевірку можливості виконання функцій (а має бути більше за 0)
		cout << endl;
		cout << "Error. Please enter correct number (0 < a): "; cin >> a;;
	}

	z1 = (((a+2) / sqrt(2*a)) - (a / (sqrt(2 * a) + 2)) + (2 / (2 - sqrt(2 * a)))) * ((sqrt(a) - sqrt(2)) / (a + 2));
	//z2 = 1 / (sqrt(a) + sqrt(2));

	cout << endl;
	cout << "z1 = " << z1 << endl;
	//cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}
