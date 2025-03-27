#include <iostream>
using namespace std;

int main() {
    int num;
    do {
        cout << "Enter a number (negative to stop): ";
        cin >> num;
    } while (num >= 0);
    cout << "Negative number entered, stopping." << endl;
    return 0;
} 