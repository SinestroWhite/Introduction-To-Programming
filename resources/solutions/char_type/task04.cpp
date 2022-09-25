#include <iostream>

#define BEG 'A'
#define END 'Z'

int main() {
    char input, symmetric;
    std::cin >> input;

    // Solution 1
    symmetric = BEG + (END - input);

    /*
    const char MID = (BEG + END) / 2;
    char distance;

     * Solution 2
    if (input <= MID) {
            distance = input - BEG;
            symmetric = END - distance;
    }
    else {
            distance = END - input;
            symmetric = BEG + distance;
    }

     * Solution 3
    distance = (input <= MID ? input - BEG : END - input);
    symmetric = (input <= MID ? END - distance : BEG + distance);
    */
    std::cout << symmetric;

    return 0;
}
