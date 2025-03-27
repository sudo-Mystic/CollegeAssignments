#include <iostream>
using namespace std;

void mergeArrays(int arr1[], int arr2[], int n1, int n2) {
    int merged[100];
    int i = 0, j = 0, k = 0;
    
    while (i < n1 && j < n2) {
        if (arr1[i] <= arr2[j])
            merged[k++] = arr1[i++];
        else
            merged[k++] = arr2[j++];
    }
    
    while (i < n1)
        merged[k++] = arr1[i++];
        
    while (j < n2)
        merged[k++] = arr2[j++];
        
    cout << "Merged array: ";
    for (i = 0; i < n1 + n2; i++)
        cout << merged[i] << " ";
    cout << endl;
}

int main() {
    int arr1[50], arr2[50], n1, n2;
    
    cout << "Enter size of first array: ";
    cin >> n1;
    cout << "Enter elements of first array: ";
    for (int i = 0; i < n1; i++)
        cin >> arr1[i];
        
    cout << "Enter size of second array: ";
    cin >> n2;
    cout << "Enter elements of second array: ";
    for (int i = 0; i < n2; i++)
        cin >> arr2[i];
        
    mergeArrays(arr1, arr2, n1, n2);
    return 0;
} 