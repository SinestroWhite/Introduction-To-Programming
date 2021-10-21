#include<iostream>

int main() {
	int n,m;
	std::cin >> n >> m;
	int width = 1 + (n - 1) * 2;
	for (int i = 0; i < width; i++) {
		std::cout << '+';
	}
	std::cout << '\n';
	if (m) {
		for (int i = 0; i < n; i++) {
			for (int j = i; j < n - 1; j++) {
				std::cout << '+';
			}
			for (int j = 0; j < 1 + i * 2; j++) {
				std::cout << '#';
			}
			for (int j = i; j < n - 1; j++) {
				std::cout << '+';
			}
			std::cout << '\n';
		}
		for (int i = 0; i < n - 1; i++) {
			for (int j = 0; j < n - 1; j++) {
				std::cout << '+';
			}
			std::cout << '#';
			for (int j = 0; j < n - 1; j++) {
				std::cout << '+';
			}
			std::cout << '\n';
		}
	}
	else {
		for (int i = 0; i < n - 1; i++) {
			for (int j = 0; j < n - 1; j++) {
				std::cout << '+';
			}
			std::cout << '#';
			for (int j = 0; j < n - 1; j++) {
				std::cout << '+';
			}
			std::cout << '\n';
		}
		for (int i = n - 1; i >= 0; i--) {
			for (int j = i; j < n - 1; j++) {
				std::cout << '+';
			}
			for (int j = 0; j < 1 + i * 2; j++) {
				std::cout << '#';
			}
			for (int j = i; j < n - 1; j++) {
				std::cout << '+';
			}
			std::cout << '\n';
		}
	}
	for (int i = 0; i < width; i++) {
		std::cout << '+';
	}
	std::cout << '\n';
	return 0;
}
