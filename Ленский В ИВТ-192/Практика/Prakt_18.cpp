#include <iostream>
#include <ctime>

int main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	int a[20] = {};
	int min = 100, max = -100;
	
	for (int i = 0; i < 20; ++i) {
		a[i] = rand() % 202 - 101;
		if (min > a[i])
			min = a[i];
		if (max < a[i])
			max = a[i];
		std::cout << a[i] << " ";
	}
	std::cout << "\n" << min << " " << max;
	return 0;
}
