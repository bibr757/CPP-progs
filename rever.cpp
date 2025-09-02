#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>


void reverse(auto first, auto last) {
    while (first != last) {
        --last;
        if (first == last) {
            break;
        }
        std::swap(*first, *last);
        ++first;
    }
}

int main() {
    std::string s = "faksmaalf;";
    auto first = s.begin();
    auto last = s.end();
    while (first != last) {
        --last;
        if (first == last) {
            break;
        }
        std::swap(*first, *last);
        ++first;
    }
}
