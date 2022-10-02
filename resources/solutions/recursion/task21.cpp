#include <iostream>
#include <vector>

using namespace std;

bool isStringInside(const string &str, const string &toFind) {
    for (int i = 0; i < str.size(); ++i) {
        if (str[i] == toFind[0]) {
            int j = 0;
            while (i < str.size() && j < toFind.size() && str[i] == toFind[j]) {
                ++j;
                ++i;
            }
            if (j == toFind.size()) {
                return true;
            }
        }
    }

    return false;
}

bool isStringInsideRecursive(const string &str, const string &toFind, int i) {
    if (str.empty() && !toFind.empty()) {
        return false;
    }

    if (str.size() <= i) {
        return false;
    }

    if (str[i] == toFind[0]) {
        int j = 0;
        while (i < str.size() && j < toFind.size() && str[i] == toFind[j]) {
            ++j;
            ++i;
        }
        if (j == toFind.size()) {
            return true;
        }
    }

    ++i;
    return isStringInsideRecursive(str, toFind, i);
}

int main() {
    string str = "dfghjkl;lkjhgfdfghjkl";
    string toFind = "fgh9";

    cout << isStringInsideRecursive(str, toFind, 0) << endl;

    return 0;
}
