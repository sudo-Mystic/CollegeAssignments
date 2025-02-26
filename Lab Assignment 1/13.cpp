#include<iostream>
using namespace std;

int main(){
    float purchasePrice, sellingPrice;
    cout << "Enter purchase price: ";
    cin >> purchasePrice;
    cout << "Enter selling price: ";
    cin >> sellingPrice;
    if(sellingPrice > purchasePrice){
        cout << "Profit: " << sellingPrice - purchasePrice;
    } else {
        cout << "Loss: " << purchasePrice - sellingPrice;
    }
    return 0;
}