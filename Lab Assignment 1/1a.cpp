#include<iostream>
using namespace std;

float sum(float a, float b){

	return a + b;
}
int main(){
	float a,b;
	cout << "Enter Two Numbers";
	cin >> a >> b;
	cout << "Sum of Two Numbers is " << sum(a, b);
	return 0;
}
