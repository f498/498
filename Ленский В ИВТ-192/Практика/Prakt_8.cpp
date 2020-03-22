#include <iostream>

int main() {
	setlocale(LC_ALL, "ru");
	double a, b, c = 0;
	char op = '@';
		std::cin >> a >> op >> b;
		switch (op) {
		case '+':
			c = a + b;
			std::cout << c << std::endl;
			break;
		case '-':
			c = a - b;
			std::cout << c << std::endl;
			break;
		case '*':
			c = a * b;
			std::cout << c << std::endl;
			break;
		case '/':
			if (b == 0) {
				std::cout << "Ошибка" << std::endl;
				break;
			}
			c = a / b;
			std::cout << c << std::endl;
			break;
		default:
			std::cout << op << " - Я так не умею" << std::endl;
		}
	return 0;
}