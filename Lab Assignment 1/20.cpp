#include<iostream>
using namespace std;

int main(){
    int a, b, result = 0;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    for(int i = 0; i < b; i++){
        result += a;
    }
    cout << "Result: " << result;
    return 0;
}