#include <iostream>
#include <vector>

bool is_pally(const std::vector<int> vec) {
    std::vector<int> reverse;
    for (int i = vec.size() - 1; i >= 0; i--) {
        reverse.push_back(vec[i]);
    }
    return vec == reverse;
}

bool is_possible(std::vector<int> vec, int remaining) {
    if (remaining < 0) {
        return false;
    }

    if (is_pally(vec)) {
        return true;
    }

    std::vector<int> left_side = vec, right_side = vec;
    left_side.erase(left_side.begin());
    right_side.pop_back();

    remaining--;
    return is_possible(left_side, remaining) ||
           is_possible(right_side, remaining);
}

int main() {
    int N;
    std::cin >> N;

    std::vector<int> vec = {1, 2, 3, 2, 5, 6};

    std::cout << is_possible(vec, N) << "\n";

    return 0;
}
