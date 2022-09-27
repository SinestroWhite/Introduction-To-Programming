#include <cstdlib>
#include <iostream>

int main() {
    srand(time(0));

    // Use `rand() % (max - min + 1) + min` to generate a number between `min`
    // and `max`
    int uppercaseLetterASCII = rand() % ((int)'Z' - (int)'A' + 1) + (int)'A';

    int zeroOrOne = rand() % 2;

    // If 0: letterASCII = uppercaseLetterASCII (the random uppercase letter)
    // If 1: letterASCII is uppercaseLetterASCII converted to lowercase
    int letterASCII = uppercaseLetterASCII + zeroOrOne * ((int)'a' - (int)'A');

    char letter = (char)letterASCII;

    std::cout << letter << std::endl;

    return 0;
}
