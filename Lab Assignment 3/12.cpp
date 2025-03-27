#include <iostream>
#include <climits>
using namespace std;

int main() {
    int rows, cols, arr[50][50];
    int max_val = INT_MIN, min_val = INT_MAX;
    
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;
    
    cout << "Enter elements of array:\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
            max_val = max(max_val, arr[i][j]);
            min_val = min(min_val, arr[i][j]);
        }
    
    cout << "Maximum element = " << max_val << endl;
    cout << "Minimum element = " << min_val << endl;
    return 0;
} 