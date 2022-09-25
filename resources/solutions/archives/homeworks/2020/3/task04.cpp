#include <iostream>

#define letters 26

struct trie {
    trie *children[letters] = {};
};

void put(trie *solution, const std::string &input, int &counter) {
    if (input.size() == 0) {
        return;
    }

    int first_letter_id = input[0] - 'a';
    if (solution->children[first_letter_id] == nullptr) {
        counter++;
        solution->children[first_letter_id] = new trie;
    }

    std::string tmp = input;
    tmp.erase(tmp.begin());
    put(solution->children[first_letter_id], tmp, counter);
}

void free(trie *solution) {
    for (int i = 0; i < letters; i++) {
        if (solution->children[i] != nullptr) {
            free(solution->children[i]);
            delete solution->children[i];
        }
    }
}

void split(trie *const solution, const std::string &input, int &counter) {
    put(solution, input, counter);
    for (int i = 0; i < input.size(); i++) {
        std::string tmp = input;
        tmp.erase(tmp.begin() + i);
        split(solution, tmp, counter);
    }
}

int main() {
    int counter = 0;
    trie *solution = new trie;
    std::string input;
    std::cin >> input;

    split(solution, input, counter);
    free(solution);

    std::cout << counter << "\n";
    return 0;
}
