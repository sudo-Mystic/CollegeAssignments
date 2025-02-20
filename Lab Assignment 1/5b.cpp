#include<iostream>
using namespace std;
float cTok(float t){
	return t + 273;
}
int main(){
	float t;
	cout << "Enter Tempreture to convert (in C): ";
	cin >> t;
	cout << "Tempreture in Kelvin: " << cTok(t);	
	return 0;
}
