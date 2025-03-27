#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, original, remainder, result = 0, digits = 0;
    cout << "Enter a number: ";
    cin >> n;
    original = n;
    for (int temp = n; temp != 0; temp /= 10) {
        ++digits;
    }
    for (int temp = n; temp != 0; temp /= 10) {
        remainder = temp % 10;
        result += pow(remainder, digits);
    }
    if (result == original)
        cout << original << " is an Armstrong number." << endl;
    else
        cout << original << " is not an Armstrong number." << endl;
    return 0;
} 