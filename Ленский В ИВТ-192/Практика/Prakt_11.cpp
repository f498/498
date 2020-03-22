#include <iostream>

int main()
{
	setlocale(LC_ALL, "ru");
	int n;
	std::cin >> n;
		if (n >= 0){
			if (n > 0)
				for (int i = n - 1; i > 0; --i)
					n *= i;
			else if (n == 0)
				n = 1;
			std::cout << n;
		}
		else {
			std::cout << n << " < 0\n";
		}
	return 0;
}