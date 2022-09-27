#include <cmath>
#include <iostream>

int main() {
    int first, second;

    std::cin >> first >> second;

    int magnitudeOfFirst = floor(log10(first));
    int magnitudeOfSecond = floor(log10(second));
    int difference = abs(magnitudeOfFirst - magnitudeOfSecond);

    std::cout << difference << std::endl;

    return 0;
}
