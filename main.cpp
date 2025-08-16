#include <iostream>
#include <vector>
#include <string>
#include <limits>

using namespace std;

int main()
{
    vector<string> msg {
        "Hello",
        "C++",
        "World",
        "from",
        "VS Code",
        "and the C++ extension!"
        };

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    
    cout << endl;
    cout << __cplusplus;

    std::cin.clear(); // reset any error flags
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//    std::cin.get(); // get one more char from the user
}
