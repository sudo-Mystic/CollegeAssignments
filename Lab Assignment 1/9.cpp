#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    num = ((num + 40) / 5) % 2 * 10;
    cout << "Result: " << num;
    return 0;
}