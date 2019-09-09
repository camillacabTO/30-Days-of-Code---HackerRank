#include <iostream>

using namespace std;

int factorial (int num2) {
    if (num2 == 1)
        return 1;
    return num2 * factorial(num2 -1);
}

int main() {

    int num;
    cin >> num;
    cout << factorial(num);
    return 0;
}