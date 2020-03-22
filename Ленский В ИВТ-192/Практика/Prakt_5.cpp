#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	double x0, u0, t, a = -9.8;

	cout << "x(t)=x0+u0*t+at^2/2" << endl;
	cout << "x0  u0  t" << endl;
	cin >> x0 >> u0 >> t;
	cout << "x(t) = " << x0 + u0 * t + a * t * t / 2;

	return 0;
}