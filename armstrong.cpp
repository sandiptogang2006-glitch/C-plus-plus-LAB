#include <iostream>
using namespace std;

int main() {
    int num, original, remainder, sum = 0;

    cout << "Enter an integer: ";
    cin >> num;

    original = num;

    while (num != 0) {
        remainder = num % 10;
        sum += remainder * remainder * remainder;
        num /= 10;
    }

    if (sum == original)
        cout << original << " is an Armstrong number." << endl;
    else
        cout << original << " is not an Armstrong number." << endl;

    return 0;
}
