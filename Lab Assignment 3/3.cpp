#include <iostream>
using namespace std;

int countDigits() {
    int num, count = 0;
    cout << "Enter a number: ";
    cin >> num;
    if (num == 0) return 1;
    while (num != 0) {
        count++;
        num /= 10;
    }
    return count;
}

int main() {
    cout << "Number of digits: " << countDigits() << endl;
    return 0;
} 