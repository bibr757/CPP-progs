#include <iostream>
#include <string>
#include <algorithm>
#include <list>

template <typename Iter, typename Predicate>
Iter find_i(Iter first, Iter last, Predicate p) {
    while (first + p.ln != last) {
        if (p.f(first)) {
            return first;
        }
        ++first;
    }
    return last;
}

class pr {
public:
    std::string substr = "lf";
    int ln = substr.length();
    bool f(auto iter) {
        std::string s(iter, iter + ln);
        if (s == substr) {
            return true;
        }
        return false;
    };
};
int main() {
    using namespace std;
    string s = "slfla";
    pr a;
    cout << a.ln;
    auto fst = find_i(s.begin(), s.end(), a);
    cout << string(fst, fst + a.ln);



    for (char i : to_array("fghk")) {
        cout << i << "\t";
    }
    cout << "\n" << to_string(125) << "\n";
    cout << stoi("102");

}
