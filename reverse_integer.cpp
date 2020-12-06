#include <iostream>
using namespace std;

int main() {
    int num, reversed = 0, digit;

    cout << "Enter an integer: ";
    cin >> num;

    while(num != 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    cout << "Reversed Number = " << reversed;

    return 0;
}