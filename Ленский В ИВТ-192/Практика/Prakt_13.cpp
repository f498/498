#include <iostream>

int main(){
	int n;
	int t = 0;
	std::cin >> n;
	if (n >= 0) {
		for (int i = 0; i < n; ++i) {
			if (pow(2, i) <= n)
				t += 1;
		}
		std::cout << t;
	}
	else
		std::cout << n << " < 0\n";
	return 0;
}

