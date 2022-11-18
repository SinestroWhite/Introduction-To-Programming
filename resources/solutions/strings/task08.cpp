#include <iostream>
#include <cstring>

bool check_str(char* str, int start_index, const char* target) {
    for (int i = 0; i < strlen(target); i++) {
        if (str[start_index + i] != target[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    char str1[] = "asdasdbeginasdasendasdasbeginasdasend begin";  // false
    char str2[] = "endginbegin";        // true

    int count_begin = 0, count_end = 0;
    /*
    for (int i = 0; i < strlen(str1); i++) {
        if (str1[i] == 'b') {
            count_begin += check_str(str1, i, "begin");
        }
        if (str1[i] == 'e') {
            count_end += check_str(str1, i, "end");
        }
    }
*/
    for (int i = 0; i < strlen(str2); i++) {
        if (str2[i] == 'b') {
            count_begin += check_str(str2, i, "begin");
        }
        if (str2[i] == 'e') {
            count_end += check_str(str2, i, "end");
        }
    }
    std::cout << (count_begin == count_end) << "\n";
    return 0;
}