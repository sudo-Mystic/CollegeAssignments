#include<iostream>
using namespace std;

int main(){
    int a, b, temp;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    temp = a;
    a = b;
    b = temp;
    cout << "Swapped numbers: " << a << " " << b;
    return 0;
}