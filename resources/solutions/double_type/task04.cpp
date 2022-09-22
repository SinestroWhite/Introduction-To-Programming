#include <cmath>
#include <iostream>

const double APPLES_PER_TREE = 115;
const double APPLES_PER_BASKET = 80;

int main() {
    int trees;

    std::cin >> trees;

    int totalApples = trees * APPLES_PER_TREE;

    std::cout << ceil((double)totalApples / APPLES_PER_BASKET) << std::endl;

    return 0;
}
