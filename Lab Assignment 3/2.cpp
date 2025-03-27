#include <iostream>
using namespace std;

long int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Factorial = " << factorial(num) << endl;
    return 0;
} 