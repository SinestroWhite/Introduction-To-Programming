#include <iostream>

#define N 20
int main() {
	bool arr[N] = {};
	// vzimame % 2
	// delim na 2 dokato ne stane 0
	// izvejdame naobratno

	int numb;
	std::cin >> numb;
	int len = 0;
	//5
	//101
	do {
		arr[len++] = numb % 2;
		numb /= 2;
	} while (numb != 0);

	for (int i = len - 1; i >= 0; i--) {
		std::cout << arr[i];
	}
	std::cout << '\n';
	return 0;
}
