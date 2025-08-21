#include <iostream>
#include <string>
#include <vector>

int main() {
    using namespace std;
    vector<int*> v;
    vector<int> a{ 1,2 };
    auto i = a.begin();
    i++;
    v.push_back(&*i);
    for (auto j : v) {
        cout << j << "\t";
    }
}
