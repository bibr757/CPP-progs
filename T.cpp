#include <iostream>
#include <vector>
#include <string>
#include <limits>
#include <ranges>

int rez(int x) {
    return x;
}

int main() {
    using namespace std;
    vector<tuple<int, string>> antv{ {1,"b"},{2,"a"},{3,"a"} };
    sort(antv.begin(),
        antv.end(),
        [](const auto& l, const auto& r) {
            return tie(get<0>(l), get<1>(l)) <
                tie(get<0>(r), get<1>(r));
        });
    for (auto& t : antv) {
        std::cout << "(" << std::get<0>(t) << ", "
            << std::get<1>(t) << ")\n";
    }
}

