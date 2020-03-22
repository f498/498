#include <iostream>
using namespace std;

int main()
{
		int int_a, int_b;
		double double_a, double_b;
		cout << "int_a = ";
		cin >> int_a;
		cout << "int_b = ";
		cin >> int_b;
		cout << "double_a = ";
		cin >> double_a;
		cout << "double_b = ";
		cin >> double_b;

		cout << "\nint int" << endl;
		cout << int_a << " + " << int_b << " = " << int_a + int_b << endl;
		cout << int_a << " - " << int_b << " = " << int_a - int_b << endl;
		cout << int_a << " * " << int_b << " = " << int_a * int_b << endl;
		cout << int_a << " / " << int_b << " = " << int_a / int_b << endl;

		cout << "\ndouble double" << endl;
		cout << double_a << " + " << double_b << " = " << double_a + double_b << endl;
		cout << double_a << " - " << double_b << " = " << double_a - double_b << endl;
		cout << double_a << " * " << double_b << " = " << double_a * double_b << endl;
		cout << double_a << " / " << double_b << " = " << double_a / double_b << endl;

		cout << "\ndouble int" << endl;
		cout << double_a << " + " << int_b << " = " << double_a + int_b << endl;
		cout << double_a << " - " << int_b << " = " << double_a - int_b << endl;
		cout << double_a << " * " << int_b << " = " << double_a * int_b << endl;
		cout << double_a << " / " << int_b << " = " << double_a / int_b << endl;

		cout << "\nint double" << endl;
		cout << int_a << " + " << double_b << " = " << int_a + double_b << endl;
		cout << int_a << " - " << double_b << " = " << int_a - double_b << endl;
		cout << int_a << " * " << double_b << " = " << int_a * double_b << endl;
		cout << int_a << " / " << double_b << " = " << int_a / double_b << endl;

	return 0;
}