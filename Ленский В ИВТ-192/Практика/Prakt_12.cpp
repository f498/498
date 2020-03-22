#include <iostream>

int main(){
	setlocale(LC_ALL, "ru");
	int n;
	std::cin >> n;
	if (n > 2){
		for (int i = 2; i < n; ++i){
			if (n % i == 0){
				std::cout << "Составное";
				break;
			}
			if (i == n - 1)
				std::cout << "Простое";
		}
	}
	else if (n == 2)
		std::cout << "Простое";
	else if (n == 1)
		std::cout << "Не простое и не составное";
	else if (n == 0)
		std::cout << "Не простое и не составное";
	else
		std::cout << n << " < 0\n";
	return 0;
}