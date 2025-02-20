#include<iostream>
using namespace std;
float cTof(float t){
	return (9*t)/5 + 32;
}
int main(){
	float t;
	cout << "Enter Tempreture to convert (in C): ";
	cin >> t;
	cout << "Tempreture in Fahrenheit: " << cTof(t);	
	return 0;
}
