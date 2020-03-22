#include <iostream>

int main() {
	setlocale(LC_ALL, "ru");
	double a, b, c;
	double D, x1, x2;

	std::cin >> a >> b >> c;

	if (a != 0) {
		D = b * b - 4 * a * c;
		if (D > 0) {
			x1 = (-b + sqrt(D)) / (2 * a);
			x2 = (-b - sqrt(D)) / (2 * a);
			std::cout << "x1 = " << x1 << std::endl;
			std::cout << "x2 = " << x2 << std::endl;
		}
		else if (D == 0) {
			x1 = -b / (2 * a);
			std::cout << x1 << std::endl;
		}
		else if (D < 0)
			std::cout << "Корней нет\n";
	}
	else {
		if (b != 0) {
			x1 = -c / b;
			std::cout << "x = " << x1;
		}
		else if(c == 0){
			std::cout << "Бесконечное число корней\n";
		}
		else {
			std::cout << "корней нет\n";
		}
		
	}
}
