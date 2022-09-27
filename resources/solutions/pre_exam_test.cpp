#include <cmath>
#include <iostream>

int Task1(const int arr[], const unsigned size) {
    int sum = 0;
    for (unsigned i = 0; i < size; ++i) {
        sum += arr[i];
    }

    return sum;
    // Return the sum of the members of the array
}

int Task2(const int arr[], const unsigned size) {
    int sum = 0;
    for (unsigned i = 0; i < size; ++i) {
        if (arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }

    return sum;
    // Return the sum of the even members of the array
}

int Task3(const int arr[], const unsigned size) {
    int biggest = arr[0];
    for (unsigned i = 1; i < size; ++i) {
        if (arr[i] > biggest) {
            biggest = arr[i];
        }
    }

    return biggest;
    // Return the biggest member of the array
}

int Task4(const int arr[], const unsigned size) {
    unsigned i = 0;
    int biggest = 0;
    while (i < size) {
        if (arr[i] % 2 == 1) {
            biggest = arr[i];
            ++i;
            break;
        }
        ++i;
    }

    while (i < size) {
        if (arr[i] % 2 == 1 && arr[i] > biggest) {
            biggest = arr[i];
        }
        ++i;
    }

    return biggest;
    // Return the biggest uneven member of the array, return 0 if there aren't
    // any
}

int Task5(const int arr[], const unsigned size) {
    unsigned i = 0;
    int smallest = 1;
    while (i < size) {
        if (arr[i] % 2 == 0) {
            smallest = arr[i];
            ++i;
            break;
        }
        ++i;
    }

    while (i < size) {
        if (arr[i] % 2 == 0 && arr[i] < smallest) {
            smallest = arr[i];
        }
        ++i;
    }

    return smallest;
    // Return the smallest even member of the array, return 1 if there aren't
    // any
}

int Task6(const int arr[], const unsigned size) {
    int sum = 0;
    for (unsigned i = 0; i < size; ++i) {
        if (arr[i] > 0 && arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }

    return sum;
    // Return the sum of the even positive members of the array
}

int Task7(const int arr[], const unsigned size) {
    int biggest = arr[0];
    for (unsigned i = 2; i < size; i += 2) {
        if (arr[i] > biggest) {
            biggest = arr[i];
        }
    }

    return biggest;
    // Return the biggest member with even index in the array
}

int Task8(const int arr[], const unsigned size) {
    int sum = 0;
    for (unsigned i = 1; i < size; i += 2) {
        sum += arr[i];
    }

    return sum;
    // Return the sum of the members with uneven indexes in the array, return 0
    // if there is only 1 member
}

int Task9(const int arr[], const unsigned size) {
    return arr[0] + arr[size - 1];
    // Return the sum of the first and last element in the array
}

bool Task10(const int arr[], const unsigned size) {
    for (unsigned i = 0; i < size - 1; ++i) {
        if (arr[i] == arr[i + 1]) {
            return true;
        }
    }

    return false;
    // Return "True" if there are 2 equal adjacent members and "False" if there
    // aren't
}

void Task11(int arr[], const unsigned size) {
    for (unsigned i = 0; i < size; ++i) {
        arr[i] *= -1;
    }

    // Reverse the signs of the members of the array
}

bool Task12(const int arr[], const unsigned size) {
    unsigned even = 0, uneven = 0;
    for (unsigned i = 0; i < size; ++i) {
        if (arr[i] % 2 == 0) {
            ++even;
        }
        else
            ++uneven;
    }

    return even > uneven;
    // return true if there are more even numbers in the array, else return
    // false
}

bool Task13(int arr[], const unsigned size) {
    for (unsigned i = 0; i < size - 1; ++i) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }

    return true;
    // Check whether the array is sorted in ascending order
}

bool Task14(int arr[], const unsigned size) {
    for (unsigned i = 0; i < size - 1; ++i) {
        if (arr[i] < arr[i + 1]) {
            return false;
        }
    }

    return true;
    // Check whether the array is sorted in descending order
}

bool Task15(const int arr[], const unsigned size, const unsigned numb) {
    for (unsigned i = 0; i < size; ++i) {
        if (arr[i] == numb) {
            return true;
        }
    }

    return false;
    // Return "True" if numb is a member of the array or "False" if it isn't
}

unsigned Task16(const char arr[]) {
    unsigned i = 0;
    while (arr[i] != '\0') { // while (arr[i++] != '\0'); is cooler
        ++i;
    }

    return i;
    // implement strlen
}

void Task17(char arr[]) {
    for (unsigned i = 0; i < Task16(arr); ++i) {
        if (arr[i] == '+') {
            arr[i] = '-';
        }
    }
    // replace all + symbols with -
}

bool Task18(const char arr[]) {
    bool U = false, P = false;
    for (unsigned i = 0; i < Task16(arr) && !(U && P);
         ++i) { // if both U and P are true, then the loop will end
        if (arr[i] == 'U') {
            U = true;
        }

        else if (arr[i] == 'P') {
            P = true;
        }
    }

    return (U && P);
    // Return "True" if the array contains U & P
}

void Task19(char arr[]) {
    for (unsigned i = 0; i < Task16(arr); ++i) {
        if (arr[i] >= 65 &&
            arr[i] <= 90) { // You can simply use 'A' and 'Z' as constraints
            arr[i] += 32;
        }
    }

    // go to lowercase
}

void Task20(char arr[]) {
    for (unsigned i = 0; i < Task16(arr); ++i) {
        if (arr[i] >= 97 && arr[i] <= 122) {
            arr[i] -= 32;
        }
        else if (arr[i] >= 65 && arr[i] <= 90) {
            arr[i] += 32;
        }
    }
    // swap cases
}

void Task21(const unsigned numb) {
    const int HH = numb / 3600;
    const int MM = (numb % 3600) / 60;
    if (HH < 10) {
        std::cout << '0';
    }

    std::cout << HH << ':';
    if (MM < 10) {
        std::cout << '0';
    }

    std::cout << MM;
    // receives seconds and turns them into HH:MM
}

double Task22(unsigned numb) {
    int size = (numb != 0) ? log10(numb) + 1 : 1;
    double sum = 0;
    for (unsigned i = 0; i < size; ++i) {
        sum += numb % 10;
        numb /= 10;
    }

    return sum / size;
    // return the average of the digits of the param number
    // hint division of integers is an integer even if the function
    // returns a double hint2 use log10 carefully
}

int main() {
    int intArr[] = { 1, 2, 3, 3, 4, 5 };
    int intArrSize = sizeof(intArr) / sizeof(int);

    std::cout << "1. " << Task1(intArr, intArrSize) << std::endl;
    std::cout << "2. " << Task2(intArr, intArrSize) << std::endl;
    std::cout << "3. " << Task3(intArr, intArrSize) << std::endl;
    std::cout << "4. " << Task4(intArr, intArrSize) << std::endl;
    std::cout << "5. " << Task5(intArr, intArrSize) << std::endl;
    std::cout << "6. " << Task6(intArr, intArrSize) << std::endl;
    std::cout << "7. " << Task7(intArr, intArrSize) << std::endl;
    std::cout << "8. " << Task8(intArr, intArrSize) << std::endl;
    std::cout << "9. " << Task9(intArr, intArrSize) << std::endl;
    std::cout << "10. " << Task10(intArr, intArrSize) << std::endl;

    std::cout << std::endl;

    std::cout << "12. " << Task12(intArr, intArrSize) << std::endl;
    std::cout << "13. " << Task13(intArr, intArrSize) << std::endl;
    std::cout << "14. " << Task14(intArr, intArrSize) << std::endl;

    Task11(intArr, intArrSize);

    std::cout << "15. " << Task15(intArr, intArrSize, -3) << std::endl;

    std::cout << std::endl;

    char charArr[] = { '+', 'U', 'T', 'e', 's', 't', '\0' };

    std::cout << "16. " << Task16(charArr) << std::endl;

    Task17(charArr);
    std::cout << "17. " << charArr << std::endl;

    std::cout << "18. " << Task18(charArr) << std::endl;

    Task19(charArr);
    std::cout << "19. " << charArr << std::endl;

    Task20(charArr);
    std::cout << "20. " << charArr << std::endl;

    std::cout << "21. ";
    Task21(4980);
    std::cout << std::endl;

    std::cout << "22. " << Task22(123) << std::endl;

    return 0;
}
