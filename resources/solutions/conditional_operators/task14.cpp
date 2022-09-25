#include <iostream>

//Напишете програма, която приема число n (-1000 <= n <= 1000), която изписва
//стойността на n с думи. Помислете за някакъв pattern, който може да се
//преизползва.

int main() {
    int input;
    std::cin >> input;

    if (input < 0) {
        std::cout << "minus ";
        input *= -1;
    }

    if (input == 1000) {
        std::cout << "hilqda\n";
        return 0;
    }

    if (input > 99) {
        const int hundreds = input / 100;
        input %= 100;
        switch (hundreds) {
        case 1:
            std::cout << "sto ";
            break;
        case 2:
            std::cout << "dvesta ";
            break;
        case 3:
            std::cout << "trista ";
            break;
        case 4:
            std::cout << "chetiristotin ";
            break;
        case 5:
            std::cout << "petstotin ";
            break;
        case 6:
            std::cout << "sheststotin ";
            break;
        case 7:
            std::cout << "sedemstotin ";
            break;
        case 8:
            std::cout << "osemstotin ";
            break;
        case 9:
            std::cout << "devetstotin ";
            break;
        }

        if (input == 0) {
            std::cout << "\n";
            return 0;
        }

        if (input % 10 == 0 || input < 20) {
            std::cout << "i ";
        }
    }

    if (input > 19) {
        const int tens = input / 10;
        switch (tens) {
        case 2:
            std::cout << "dvaiset ";
            break;
        case 3:
            std::cout << "triiset ";
            break;
        case 4:
            std::cout << "chetireset ";
            break;
        case 5:
            std::cout << "petdeset ";
            break;
        case 6:
            std::cout << "sheiset ";
            break;
        case 7:
            std::cout << "sedemdeset ";
            break;
        case 8:
            std::cout << "osemdeset ";
            break;
        case 9:
            std::cout << "devetdeset ";
            break;
        }

        if (input % 10 > 0) {
            std::cout << "i ";
            input %= 10;
        } else {
            std::cout << "\n";
            return 0;
        }
    }

    switch (input) {
    case 0:
        std::cout << "nula";
        break;
    case 1:
        std::cout << "edno";
        break;
    case 2:
        std::cout << "dve";
        break;
    case 3:
        std::cout << "tri";
        break;
    case 4:
        std::cout << "chetiri";
        break;
    case 5:
        std::cout << "pet";
        break;
    case 6:
        std::cout << "shest";
        break;
    case 7:
        std::cout << "sedem";
        break;
    case 8:
        std::cout << "osem";
        break;
    case 9:
        std::cout << "devet";
        break;
    case 10:
        std::cout << "deset";
        break;
    case 11:
        std::cout << "edinaiset";
        break;
    case 12:
        std::cout << "dvanaiset";
        break;
    case 13:
        std::cout << "trinaiset";
        break;
    case 14:
        std::cout << "chetirinaiset";
        break;
    case 15:
        std::cout << "petnaiset";
        break;
    case 16:
        std::cout << "shestnaiset";
        break;
    case 17:
        std::cout << "sedemnaiset";
        break;
    case 18:
        std::cout << "osemnaiset";
        break;
    case 19:
        std::cout << "devetnaiset";
        break;
    }

    std::cout << "\n";
    return 0;
}
