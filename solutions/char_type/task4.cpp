#include <iostream>

int main() {
	const char BEG = 'A', END = 'Z', MID = (BEG + END) / 2;
	char input, symmetric, distance;
	std::cin >> input;

	// Solution 1
	distance = (input <= MID ? input - BEG : END - input);
	symmetric = (input <= MID ? END - distance : BEG + distance);
	std::cout << symmetric;

	// Solution 2
	if (input <= MID) {
		distance = input - BEG;
		symmetric = END - distance;
	} else {
		distance = END - input;
		symmetric = BEG + distance;
	}
	std::cout << symmetric;

	// Solution 3
	symmetric = BEG + END - input;
	std::cout << symmetric << "\n";
}
