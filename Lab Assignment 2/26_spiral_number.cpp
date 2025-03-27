#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int a[n][n];
    int val = 1;
    int k = 0, l = 0;
    while (k < n && l < n) {
        for (int i = l; i < n; ++i) {
            a[k][i] = val;
        }
        k++;
        for (int i = k; i < n; ++i) {
            a[i][n - 1] = val;
        }
        n--;
        if (k < n) {
            for (int i = n - 1; i >= l; --i) {
                a[n][i] = val;
            }
        }
        if (l < n) {
            for (int i = n - 1; i >= k; --i) {
                a[i][l] = val;
            }
            l++;
        }
        val = (val == 1) ? 2 : 1;
    }
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
} 