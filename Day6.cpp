#include <iostream>
#include <string>

using namespace std;

int main() {

    int tests;
    cin >> tests;

    for (size_t i = 0; i < tests; i++) {
        string str;
        cin >> str;
        string even;
        string odds;
        for (size_t j = 0; j < str.length(); j++)
            if (j % 2 == 0)
                even += str[j]; cout << even;
        cout << " ";
        for (size_t x = 0; x < str.length(); x++)
            if (x % 2 != 0)
                odds += str [x]; cout << odds;
        cout << endl;
    }
    return 0;
}