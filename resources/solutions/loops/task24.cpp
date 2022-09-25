#include <iostream>

int main() {
    int number;
    std::cin >> number;

    int length = 1;
    int temp_length = number;
    while (temp_length / 10 > 0) {
        temp_length /= 10;
        length++;
    }
    std::cout << length << "\n";

    int first_digit = number;
    for (int i = 0; i < length - 1; i++) {
        first_digit /= 10;
    }
    int last_digit = number % 10;
    int sum = first_digit + last_digit;
    std::cout << sum << "\n";

    int swapped_digits = last_digit;
    int ten_by_length = 1;
    for (int i = 0; i < length - 1; i++) {
        ten_by_length *= 10;
    }
    swapped_digits *= ten_by_length;
    swapped_digits += number % ten_by_length - last_digit + first_digit;
    std::cout << swapped_digits << "\n";

    int product = 1;
    int temp_product = number;
    while (temp_product > 0) {
        product *= temp_product % 10;
        temp_product /= 10;
    }
    std::cout << product << "\n";

    int reverse_digits = last_digit;
    int temp_reversed = number / 10;
    while (temp_reversed > 0) {
        reverse_digits *= 10;
        reverse_digits += temp_reversed % 10; // 432
        temp_reversed /= 10;
    }
    std::cout << reverse_digits << "\n";

    std::cout << "The number is " << (number == reverse_digits ? "" : "not ")
              << "a palindrome\n";

    int zero = 0, one = 0, two = 0, three = 0, four = 0, five = 0, six = 0,
        seven = 0, eight = 0, nine = 0;
    for (int i = 0; i < length; i++) {
        int last_digit = number % 10;
        switch (last_digit) {
        case 0:
            zero++;
            break;
        case 1:
            one++;
            break;
        case 2:
            two++;
            break;
        case 3:
            three++;
            break;
        case 4:
            four++;
            break;
        case 5:
            five++;
            break;
        case 6:
            six++;
            break;
        case 7:
            seven++;
            break;
        case 8:
            eight++;
            break;
        case 9:
            nine++;
            break;
        }
        number /= 10;
    }

    if (zero > 0) {
        std::cout << "0 - " << zero << "\n";
    }
    if (one > 0) {
        std::cout << "1 - " << one << "\n";
    }
    if (two > 0) {
        std::cout << "2 - " << two << "\n";
    }
    if (three > 0) {
        std::cout << "3 - " << three << "\n";
    }
    if (four > 0) {
        std::cout << "4 - " << four << "\n";
    }
    if (five > 0) {
        std::cout << "5 - " << five << "\n";
    }
    if (six > 0) {
        std::cout << "6 - " << six << "\n";
    }
    if (seven > 0) {
        std::cout << "7 - " << seven << "\n";
    }
    if (eight > 0) {
        std::cout << "8 - " << eight << "\n";
    }
    if (nine > 0) {
        std::cout << "9 - " << nine << "\n";
    }

    return 0;
}
