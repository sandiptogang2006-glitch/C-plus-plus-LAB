#include <iostream>
using namespace std;

int main() {
    int n, original, reversed = 0, digit;

    cout << "Enter an integer: ";
    cin >> n;

    original = n;

    while (n != 0) {
        digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    if (original == reversed)
        cout << "Palindrome";
    else
        cout << "Not a palindrome";

    return 0;
}
