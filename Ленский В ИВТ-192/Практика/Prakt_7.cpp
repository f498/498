#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	double a = 0, b = 0, c = 0, p;
	int sposob;
	double Ax = 0, Ay = 0,
		Bx = 0, By = 0,
		Cx = 0, Cy = 0;

	cout << "1 - Через длины сторон" << endl;
	cout << "2 - Через координаты точек" << endl;

	cin >> sposob;

	if (sposob == 1 || sposob == 2)
	{
		if (sposob == 2)
		{
			cin >> Ax >> Ay;
			cin >> Bx >> By;
			cin >> Cx >> Cy;

			a = sqrt(abs(Ax * Ax - Bx * Bx) + abs(Ay * Ay - By * By));
			b = sqrt(abs(Ax * Ax - Cx * Cx) + abs(Ay * Ay - Cy * Cy));
			c = sqrt(abs(Cx * Cx - Bx * Bx) + abs(Cy * Cy - By * By));
		}
		else if (sposob == 1)
		{
			cin >> a;
			cin >> b;
			cin >> c;
		}
		if ((a + b > c) & (a + c > b) & (b + c > a))
		{
			p = (a + b + c) / 2;
			cout << "S = " << sqrt(p * (p - a) * (p - b) * (p - c));
		}
		else
			cout << "Это не треугольник\n";
	}
	else
		cout << "Ошибка\n";


	return 0;
}
