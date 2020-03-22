#include <iostream>

int main()
{
	setlocale(LC_ALL, "ru");
	double a, c;
	int b;
	std::cin >> a;
	std::cin >> b;
	c = a;

	if (b > 0) {
		for (int i = 0; i < b - 1; ++i)
			c *= a;
		std::cout << c;
	}
	else if (b < 0)
	{
		if (c != 0) {
			b *= -1;
			for (int i = 0; i < b - 1; ++i)
				c *= a;
			c = 1 / c;
			std::cout << c;
		}
		else
			std::cout << "Ошибка\n";
	}
	else if (b == 0) {
		c = 1;
		std::cout << c;
	}
	return 0;
}
