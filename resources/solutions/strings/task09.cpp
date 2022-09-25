#include <iostream>
#include <string>
//Напишете програма, която въвежда знаков низ S и като резултат отпечатва онези
//малки латински букви, които не се съдържат в низа.

#define all 26

int main() {
    std::string sample;
    std::cin >> sample;

    bool letter[all] = {};

    for (int i = 0; i < sample.size(); i++) {
        letter[sample[i] - 'a'] = 1;
    }

    for (int i = 0; i < all; i++) {
        if (letter[i] == 0) {
            std::cout << char(i + 'a') << '\n';
        }
    }
}
