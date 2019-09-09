#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {

    int length;
    cin >> length;
    string name;
    int phone;
    map<string, int> phonebook;

    for (size_t i = 0; i < length; i++) {
        cin >> name;
        cin >> phone;
        phonebook.insert(make_pair(name, phone));
    }

    string search_name;
    while (cin >> search_name) {
        auto it = phonebook.find(search_name);
        if (it != phonebook.end()) {
            cout << it->first << '=' << it->second << endl;
        } else {
            cout << "Not found" << endl;
        }
    }
    return 0;

}

