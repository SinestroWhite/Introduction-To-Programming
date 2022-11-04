#include <iostream>

int main() {
    int a[] = {1, 55, 120, 120, 450, 888, 9123};
    int b[] = {7, 32, 91, 120, 120, 450, 888};

    int counter = 0;
    for (int i = 0; i < sizeof(a) / sizeof(int); i++) {
        for (int j = 0; j < sizeof(b) / sizeof(int); j++) {
            if (a[i] == b[j]) {
                counter++;
                while (a[i] == a[i+1]) {
                    i++;
                }
                while (b[j] == b[j+1]) {
                    j++;
                }
            }
        }
    }
    std::cout << counter << "\n";
}