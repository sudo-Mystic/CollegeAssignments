#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    num += 40;
    num /= 5;
    num %= 2;
    num *= 10;
    cout << "Result: " << num;
    return 0;
}