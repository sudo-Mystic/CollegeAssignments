#include <iostream>
using namespace std;

void fibonacci(int n, int a = 0, int b = 1) {
    if (n > 0) {
        cout << a << " ";
        fibonacci(n - 1, b, a + b);
    }
}

int main() {
    int terms;
    cout << "Enter number of terms: ";
    cin >> terms;
    fibonacci(terms);
    cout << endl;
    return 0;
} 