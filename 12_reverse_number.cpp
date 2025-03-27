#include <iostream>
using namespace std;

int main() {
    int n, reversedNumber = 0;
    cout << "Enter a number: ";
    cin >> n;
    for (; n != 0; n /= 10) {
        int digit = n % 10;
        reversedNumber = reversedNumber * 10 + digit;
    }
    cout << "The reversed number is " << reversedNumber << endl;
    return 0;
} 