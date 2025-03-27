#include <iostream>
using namespace std;

int main() {
    int rows, cols, arr[50][50];
    int sum = 0;
    
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;
    
    cout << "Enter elements of array:\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
            sum += arr[i][j];
        }
    
    cout << "Sum of all elements = " << sum << endl;
    return 0;
} 