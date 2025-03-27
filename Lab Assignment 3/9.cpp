#include <iostream>
using namespace std;

int main() {
    int n, arr[100];
    double sum = 0;
    
    cout << "Enter number of elements: ";
    cin >> n;
    
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    
    cout << "Average = " << sum/n << endl;
    return 0;
} 