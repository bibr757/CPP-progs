#include <iostream>
#include <vector>
#include <string>
#include <limits>
#include <ranges>
#include <utility>
#include <tuple>

bool Compare(const std::vector<int> lval, const std::vector<int> rval) {
    int i = 0;
    while (i < lval.size() && i < rval.size()) {
        if (lval[i] != rval[i])return lval[i] < rval[i];
        ++i;
    }
    return lval.size() < rval.size();
}

enum class Color {
    White,
    Red,
    Green,
};

struct Point {
    double x = 0.0;
    double y = 0.0;
    double z = 0.0;
    Color color;
};

int main() {
    using namespace std;
    Point p{ .x = 10,.y = 1,.z = 2.3,.color = Color::Green };
    std::pair<int, std::string> p1{ 1,"dsas" };
    std::tuple<double, std::string, Color>p2{ 1.2,"dsa",Color::White };
    auto [n, s] = p1;

    vector<vector<int>> v{ {1,2,3,4},{1,2,3} };
    std::sort(v.begin(), v.end(), Compare);
    for (auto& i : v) {
        for (auto& j : i) cout << j;
        cout << "\t";
    }
}
struct Foo {
    Foo() {}
    Foo(int n) :Foo() {
        std::cout << "B";
        throw n;
    }
    ~Foo() { std::cout << "~B"; }
};
int Fn(...) {
    return 1;
}
