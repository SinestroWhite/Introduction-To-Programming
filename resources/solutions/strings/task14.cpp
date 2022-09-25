#include <iostream>
#include <string>

int main() {
    std::string str;

    std::getline(std::cin, str);

    size_t leftIndex = 0, rightIndex = 0;

    for (int index = 0; index < str.size(); ++index) {
        for (int reverseIndex = str.size() - 1; reverseIndex >= index;
             --reverseIndex) {
            if (str[index] == str[reverseIndex]) {
                if ((reverseIndex - index) > (rightIndex - leftIndex)) {
                    leftIndex = index;
                    rightIndex = reverseIndex;
                }
                break;
            }
        }
    }

    std::cout << leftIndex << ' ' << rightIndex << '\n';

    return 0;
}
