#include <cstring>
#include <iostream>

const int MAX_BUFFER_SIZE = 100;
const int SPECIAL_SYMBOLS_COUNT = 3;

int main() {
    char str[MAX_BUFFER_SIZE];

    std::cin.getline(str, MAX_BUFFER_SIZE);

    char special_symbols[SPECIAL_SYMBOLS_COUNT] = {'!', '?', ','};
    int special_symbols_counter[SPECIAL_SYMBOLS_COUNT]{};

    int size = std::strlen(str);

    for (int i = 0; i < size; ++i) {
        for (int symbol_index = 0; symbol_index < SPECIAL_SYMBOLS_COUNT;
             symbol_index++) {
            if (str[i] == special_symbols[symbol_index]) {
                ++special_symbols_counter[symbol_index];
                break;
            }
        }
    }

    return 0;
}
