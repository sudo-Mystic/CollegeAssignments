#include<iostream>
using namespace std;

float Area(float l, float b){
 return l*b;
}
int main(){
	float l,b;
	cout << "Enter the Lenght and Width of rectangle respectively ";
	cin >> l >> b;
	cout << "Area of rectangle is " << Area(l,b);
	return 0;
}
