#include <iostream>
#include <vector>
#include <string>
#include <limits>
#include <ranges>

int HanoiTowers(int n, int from, int to) {
    using namespace std;
    if (n == 1) return 1;
    int unusedPeg = 6 - from - to;
    return HanoiTowers(n - 1, from, unusedPeg) + HanoiTowers(n - 1, unusedPeg, to);
}

int main() {
    std::cout << HanoiTowers(6, 1, 3);
}
