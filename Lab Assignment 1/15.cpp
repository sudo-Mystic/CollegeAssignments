#include <iostream>
using namespace std;

int main() {
    int hours, minutes;
    cout << "Enter hours (0-23): ";
    cin >> hours;
    cout << "Enter minutes (0-59): ";
    cin >> minutes;
    
    if (hours < 0 || hours > 23 || minutes < 0 || minutes > 59) {
        cout << "Invalid time format!" << endl;
        return 1;
    }
    
    if (hours == 0) {
        cout << "12:" << (minutes < 10 ? "0" : "") << minutes << " AM" << endl;
    }
    else if (hours < 12) {
        cout << hours << ":" << (minutes < 10 ? "0" : "") << minutes << " AM" << endl;
    }
    else if (hours == 12) {
        cout << "12:" << (minutes < 10 ? "0" : "") << minutes << " PM" << endl;
    }
    else {
        cout << (hours - 12) << ":" << (minutes < 10 ? "0" : "") << minutes << " PM" << endl;
    }
    
    return 0;
}