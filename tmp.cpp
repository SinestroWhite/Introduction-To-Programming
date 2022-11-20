#include <iostream>
#include <cstring>

int str_to_int(char* str) {
    int number = 0;
    bool negative = (str[0] == '-');

    // 12345  5*10^0 + 4* 10^1 + 3* 10^2 ....
    for (int i = 0 + negative; i < strlen(str); i++) {
        number *= 10;
        number += str[i] - '0';
    }

    if (negative) {
        return number * -1;
    }
    return number;
}

int main() {
    char str1[100];
    char str2[100];
    std::cin >> str1 >> str2;
    
    int str1_num = str_to_int(str1);
    int str2_num = str_to_int(str2);
    
    std::cout << (str1_num > str2_num ? str1_num : str2_num) << "\n";
    
    return 0;
}