#include<iostream>
using namespace std;

float interest(float principle, float time, float rate){
 return (principle*time*rate)/100;
}
int main(){
	float p,t,r;
	cout << "Enter the Principle Amount ";
	cin >> p;
	cout << "Enter the Interest Rate (in %) ";
	cin >> r;
	cout << "Enter the Time Period (in years) ";
	cin >> t;
	cout << "Simple Interest on the given Amount will be " << interest(p,t,r);
	return 0;
}
