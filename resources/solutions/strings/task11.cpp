#include <iostream>
#include <string>

int main() {
    std::string input;

    std::cin >> input;

    // const char bukvi[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
    //                       'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r',
    //                       's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    bool isSeen[26] {};

    for (int i = 0; i < input.size(); ++i) {
        if (input[i] >= 'a' && input[i] <= 'z') {
            isSeen[input[i] - 'a'] = true;
        }
    }

    for (int i = 0; i < 26; ++i) {
        if (!isSeen[i]) {
            std::cout << (char)('a' + i);
        }
    }

    return 0;
}
