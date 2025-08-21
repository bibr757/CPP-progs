#include <iostream>
#include <vector>
#include <limits>
#include <format>
#include <list>
#include <algorithm>



std::vector<std::string> split(const std::string& st, const std::string& sep) {
    using namespace std;
    std::vector<std::string> res;
    size_t start = 0;
    size_t pos;

    while ((pos = st.find(sep, start)) != std::string::npos/*конст. для ошибки строки*/) {
        res.emplace_back(st, start, pos - start); // копируем только нужный кусок
        start = pos + sep.size();
    }
    res.emplace_back(st, start); // остаток строки
    return res;
}

std::vector<std::string_view> split_sv(std::string_view st, std::string_view sep) {
    std::vector<std::string_view> res;
    auto it = st.begin();
    auto end = st.end();

    while (true) {
        auto pos = std::search(it, end, sep.begin(), sep.end());
        auto dis = std::distance(it, pos);
        (int)dis;
        std::cout << "&*it:" << it << "\n";
        res.emplace_back(it, pos); // создаём view из диапазона
        if (pos == end) break;                          // разделителей больше нет
        it = pos + sep.size();                          // смещаем итератор за разделитель
    }
    return res;
}

int main() {
    using namespace std;
    string s = "fjk 12 ddmkwo 1fs";
    vector<string> res;
    for (string_view i : split_sv(s, "mk")) {
        res.emplace_back(i);
    }
    for (string_view i : res) {
        cout << i;
    }
    s.clear();
    s.shrink_to_fit();
    string overwriter = "THIS_OVERWRITES_OLD_MEMORY!!!";
    for (string_view i : res) {
        cout << i;
    }
    return 0;
}
