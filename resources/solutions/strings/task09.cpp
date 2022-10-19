#include <cstring>
#include <iostream>
//Напишете програма, която въвежда знаков низ S и като резултат отпечатва онези
//малки латински букви, които не се съдържат в низа.

#define all 26

const int MAX_BUFFER_SIZE = 100;

int main() {
    char sample[MAX_BUFFER_SIZE];
    std::cin.getline(sample, MAX_BUFFER_SIZE);

    bool letter[all] = {};

    int size = std::strlen(sample);

    for (int i = 0; i < size; i++) {
        if (sample[i] >= 'a' && sample[i] <= 'z') {
            letter[sample[i] - 'a'] = true;
        }
    }

    for (int i = 0; i < all; i++) {
        if (!letter[i]) {
            std::cout << char(i + 'a') << '\n';
        }
    }
}
