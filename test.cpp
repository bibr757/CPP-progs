#include <iostream>
#include <vector>
#include <limits>
#include <format>
#include <list>



std::vector<std::string> split(const std::string&st,const std::string &sep) {
    using namespace std;
    int sl=sep.length();
    int lst=st.length();
    vector<string> res;
    for (int i {0}, j {0};j<=lst;j++){
        if (st.substr(j,sl)==sep or j==lst){
            res.push_back(st.substr(i, j-i));
            i=j+sl;
        }
    }
    return res;
}
int main() {
    using namespace std;
    string s="fjk 12 ddmkwo 1fs";
    for (string i : split(s,"mk"))
        cout << i << '\n';
    cout << "main branch";
    cout << "main branch";
    cout << "main branch";
    
    cout << "first branch";
    cout << "first branch";
    cout << "first branch";
    return 0;
}
