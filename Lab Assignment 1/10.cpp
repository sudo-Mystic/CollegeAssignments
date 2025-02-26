#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    string subjects[7];
    int marks[7];
    for(int i = 0; i < 7; i++){
        cout << "Enter subject name: ";
        cin >> subjects[i];
    }
    for(int i = 0; i < 7; i++){
        cout << "Enter marks for " << subjects[i] << ": ";
        cin >> marks[i];
    }
    int total = 0;
    for(int i = 0; i < 7; i++){
        cout << setw(10) << subjects[i] << ": " << marks[i] << endl;
        total += marks[i];
    }
    cout << "Total Percentage: " << (total / 7.0) << "%" << endl;
    return 0;
}