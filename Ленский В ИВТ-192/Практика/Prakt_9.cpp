#include <iostream>
#include <ctime>

int main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	int a, b;
	int i = 5;
	int ch = 0;

	while (i--) {
		if (i == 4) {
			a = rand() % 101;
			std::cout << "Угадай число от 0 до 100\n";
		}
		std::cin >> b;
		if ((b < a) and (i != 0))
			std::cout << "Число больше\n";
		else if ((b > a) and (i != 0))
			std::cout << "Число меньше\n";
		else if (b == a) {
			std::cout << "Поздравляю\n";
			i = 0;
		}
		else
			std::cout << "Вы проиграли. Было загадано - " << a << std::endl;
		if (i == 0) {
			std::cout << "Хотите начать сначала? (1 - ДА)\n";
			std::cin >> ch;
		}
		if (ch == 1) {
			i = 5;
			ch = 0;
		}
	}

	return 0;
}
