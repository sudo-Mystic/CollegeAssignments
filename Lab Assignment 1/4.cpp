#include<iostream>
using namespace std;

int main(){
	char x;
	cout << "Enter a Character: ";
	cin >> x;
	
	//Checking if character is alphabet or not
	if(int(x) >= 97 && int(x) <= 122){
		cout << "Next four characters are : " << char(int(x) + 1) << char(int(x) + 2) << char(int(x) + 3) << char(int(x) + 4); 
	}else{
		cout << "ERROR! Enter Valid Character";
	}
	
	return 0;
}
