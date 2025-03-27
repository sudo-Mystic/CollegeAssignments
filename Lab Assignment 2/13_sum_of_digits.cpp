#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    for (; n != 0; n /= 10) {
        sum += n % 10;
    }
    cout << "The sum of digits is " << sum << endl;
    return 0;
} 