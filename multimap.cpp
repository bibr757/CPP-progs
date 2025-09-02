#include <iostream>
#include <vector>
#include <string>
#include <limits>
#include <ranges>
#include <unordered_map>
#include <algorithm>

int main() {
    using namespace std;
    unordered_multimap<string, int> d = {
        {"a",9},
        {"a",8},
        {"a",7},
        {"a",6},
        {"c",7},
        {"c",7},
        {"c",7}
    };
    // auto iter = d.find("a")++;
    // d.erase(iter);
    // d.erase("c");
    auto r = d.equal_range("a");
    for (auto& iter = r.first;iter != r.second;++iter) {
        cout << (*iter).first << "\t" << (*iter).second << "\n";
    }
}
