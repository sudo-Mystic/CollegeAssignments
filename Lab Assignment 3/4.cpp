#include <iostream>
using namespace std;

void printPrimes(int start, int end) {
    for (int i = start; i <= end; i++) {
        bool isPrime = true;
        if (i <= 1) isPrime = false;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) cout << i << " ";
    }
    cout << endl;
}

int main() {
    int start, end;
    cout << "Enter range (start end): ";
    cin >> start >> end;
    printPrimes(start, end);
    return 0;
} 