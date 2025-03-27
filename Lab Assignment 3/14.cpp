#include <iostream>
using namespace std;

int main() {
    int rows, cols, arr[50][50];
    
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;
    
    cout << "Enter elements of array:\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> arr[i][j];
    
    for (int j = 0; j < cols; j++) {
        int col_sum = 0;
        for (int i = 0; i < rows; i++)
            col_sum += arr[i][j];
        cout << "Sum of column " << j+1 << " = " << col_sum << endl;
    }
    return 0;
} 