#include<iostream>
using namespace std;

float Area(float b, float h){
 return 0.5*b*h;
}
int main(){
	float b,h;
	cout << "Enter the Base and Height of Triangle respectively ";
	cin >> b >> h;
	cout << "Area of triangle is " << Area(b , h);
	return 0;
}
