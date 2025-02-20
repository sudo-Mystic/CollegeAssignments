#include<iostream>
using namespace std;

float circum(float r){
	return 2*3.14159*r;
}
int main(){
	float r;
	cout << "Enter Radius of the circle ";
	cin >> r;
	cout << "Perimeter of the circle is " << circum(r);
	return 0;
}
