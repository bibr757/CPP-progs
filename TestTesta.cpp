#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <functional>

void f() {
    using namespace std;
    vector<pair<string, int>> r = { {"s",5},{"f",3} };
    map<string, int> a;
    a.insert({ "a",1 });
    a.insert_range(r);
    for (const auto& [k, v] : a)
        cout << k << "\t" << v << "\n";
}

void g() {
    using namespace std;
    int a = 1;
    int const* x = &a;//указатель указывает на const int
    const int* x = &a;//указатель указывает на const int 
    int* const x = &a;//константный указатель указывает на int
}

int main() {
    using namespace std;
    g();
}
