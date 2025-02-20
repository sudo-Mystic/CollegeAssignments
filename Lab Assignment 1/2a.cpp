#include<iostream>
using namespace std;

float Area(float r){
 return 3.14159*r*r;
}
int main(){
	float r;
	cout << "Enter the radius of circle ";
	cin >> r;
	cout << "Area of Circle is " << Area(r);
	return 0;
}
