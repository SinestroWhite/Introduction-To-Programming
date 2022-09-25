#include <iostream>

enum Months { Jan = 1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec };
#define LOW 28
#define HIGH 29
#define SHORT 30
#define LONG 31

int main() {
    int day, month, year;

    std::cin >> day;
    std::cin >> month;
    std::cin >> year;

    if (day > LONG || month > Dec || year < 0) {
        std::cerr << "Invalid date\n";
        return 1;
    }

    bool isFeb = month == Feb;
    bool isShort =
        (month == Apr || month == Jun || month == Sep || month == Nov);
    bool isLong = isFeb == isShort;

    if (day < LOW) {
        day++;
    } else if (day < SHORT && (isShort || isLong)) {
        day++;
    } else if (day < LONG && isLong) {
        day++;
    } else if (day == SHORT && isShort) {
        day = 1;
        month++;
    } else if (day == LONG && isLong) {
        day = 1;
        if (month == Dec) {
            month = Jan;
            year++;
        } else {
            month++;
        }
    } else if (month == Feb) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            if (day == LOW) {
                day++;
            } else if (day == HIGH) {
                day = 1;
                month++;
            } else {
                std::cerr << "Invalid date\n";
                return 1;
            }
        } else if (day == LOW) {
            day = 1;
            month++;
        } else {
            std::cerr << "Invalid date\n";
            return 1;
        }
    } else {
        std::cerr << "Invalid date\n";
        return 1;
    }
    std::cout << day << ' ' << month << ' ' << year << '\n';

    return 0;
}
