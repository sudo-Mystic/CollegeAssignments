#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    if(num % 2 != 0){
        num++;
    }
    cout << "Result: " << num;
    return 0;
}