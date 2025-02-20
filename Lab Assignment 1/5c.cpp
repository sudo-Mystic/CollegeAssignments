#include<iostream>
using namespace std;
float fTok(float t){
	return 1.8*(t-273.15)+ 32;
}
int main(){
	float t;
	cout << "Enter Tempreture to convert (in F): ";
	cin >> t;
	cout << "Tempreture in Kelvin: " << fTok(t);	
	return 0;
}
