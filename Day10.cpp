#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> decimalToBinary (int dec) {
    vector<int> binary;
    while (dec > 0) {
        int bin = dec % 2;
        dec /= 2;
        binary.push_back(bin);
    }
    return binary;
}

int consecutiveOnes (vector<int> &vec) {
    int counter = 0;
    int longest = 0;
    for (auto it = vec.rbegin(); it != vec.rend(); it++) {
        if(*it == 1) {
            counter++;
            if (longest < counter)
                longest = counter;
        } else {
            counter = 0;
        }
    }
    return longest;
}

int main() {

    vector<int> vec = decimalToBinary(13);
    cout << consecutiveOnes(vec);
//    for (auto &b : vec)
//        cout << b;
    cout << endl;
    return 0;
}