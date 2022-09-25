#include <iostream>

using namespace std;

bool isPalindrome(const string &str) {

    if (str.size() <= 1) {
        return true;
    }

    if (str.front() != str.back()) {
        return false;
    }

    str.pop_back();
    str.pop_front();

    return isPalindrome(str);
}

bool isPalindrome(char str[], const int &size, int i) {

    if (size <= 1) {
        return true;
    }

    if (str[i] != str[size - i]) {
        return false;
    }

    ++i;
    return isPalindrome(str, size, i);
}

int main() { return 0; }
