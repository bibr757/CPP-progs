#include <iostream>
#include <vector>
#include <string>
#include <limits>
#include <ranges>

std::vector<int*> Merge(std::vector<int*> p1, std::vector<int*> p2) {
    std::vector<int*> res;
    auto i{ p1.begin() };
    auto j{ p2.begin() };
    for (;i != p1.end() && j != p2.end();) {
        if (**i < **j) res.push_back(*i++);
        else res.push_back(*j++);
    }
    if (i == p1.end()) {
        for (;j != p2.end();++j) {
            res.push_back(*j);
        }
    }
    else {
        for (;i != p1.end();++i) {
            res.push_back(*i);
        }
    }

    // res.append_range(std::ranges::subrange(j, p2.end())) :
        // res.append_range(std::ranges::subrange(i, p1.end()));
    return res;
}

std::vector<int*> MergeSort(std::vector<int*> p) {
    using namespace std;
    auto mid = p.begin() + p.size() / 2;
    vector<int*> p1(p.begin(), mid);
    vector<int*> p2(mid, p.end());
    if (p.size() == 1) return p;
    // for (size_t i{ 0 }; i < p.size();++i) {
    //     i < p.size() / 2 ? p1.push_back(p[i]) : p2.push_back(p[i]);
    // }
    vector<int*> p1Sorted{ MergeSort(p1) };
    vector<int*> p2Sorted{ MergeSort(p2) };
    vector<int*> pSorted{ Merge(p1Sorted,p2Sorted) };
    return pSorted;
}

int main() {
    using namespace std;
    vector<int> a{ 8,6,12,3,4 };
    vector<int*> p;
    // vector<int*> p1;
    // vector<int*> p2;
    // for (size_t i{ 0 }; i < p.size();++i) {
    //     i < p.size() / 2 ? p1.push_back(&p[i]) : p2.push_back(&p[i]);
    // }
    for (size_t i{ 0 }; i < a.size();++i) {
        p.push_back(&a[i]);
    }
    for (int* i : MergeSort(p)) {
        std::cout << *i << " ";
    }
}
