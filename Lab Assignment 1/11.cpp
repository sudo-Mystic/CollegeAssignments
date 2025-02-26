#include<iostream>
using namespace std;

float cTof(float t){
    return (9*t)/5 + 32;
}

float cTok(float t){
    return t + 273.15;
}

int main(){
    float t;
    cout << "Enter temperature in Celsius: ";
    cin >> t;
    cout << "Temperature in Fahrenheit: " << cTof(t) << endl;
    cout << "Temperature in Kelvin: " << cTok(t) << endl;
    return 0;
}