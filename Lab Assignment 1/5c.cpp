#include<iostream>
using namespace std;
float fTok(float t){
	return (t-32)/1.8 + 273.15;
}
int main(){
	float t;
	cout << "Enter Tempreture to convert (in F): ";
	cin >> t;
	cout << "Tempreture in Kelvin: " << fTok(t);	
	return 0;
}
