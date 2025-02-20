#include<iostream>
using namespace std;

float avg(float a, float b){

	return (a + b)/2;
}
int main(){
	float a,b;
	cout << "Enter Two Numbers ";
	cin >> a >> b;
	cout << "Mean of Two Numbers is " << avg(a, b);
	return 0;
}
