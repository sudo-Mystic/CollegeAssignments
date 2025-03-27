#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int rollNo;
    float marks;
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    
    Student students[50];
    cin.ignore();
    
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for student " << i+1 << ":\n";
        cout << "Name: ";
        getline(cin, students[i].name);
        cout << "Roll No: ";
        cin >> students[i].rollNo;
        cout << "Marks: ";
        cin >> students[i].marks;
        cin.ignore();
    }
    
    cout << "\nStudent Details:\n";
    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i+1 << ":\n";
        cout << "Name: " << students[i].name << endl;
        cout << "Roll No: " << students[i].rollNo << endl;
        cout << "Marks: " << students[i].marks << endl;
    }
    
    return 0;
} 