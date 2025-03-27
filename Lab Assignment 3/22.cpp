#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int rollNo;
    float marks;
};

void displayStudent(Student s) {
    cout << "\nStudent Details:\n";
    cout << "Name: " << s.name << endl;
    cout << "Roll No: " << s.rollNo << endl;
    cout << "Marks: " << s.marks << endl;
}

int main() {
    Student s;
    
    cout << "Enter student details:\n";
    cout << "Name: ";
    getline(cin, s.name);
    cout << "Roll No: ";
    cin >> s.rollNo;
    cout << "Marks: ";
    cin >> s.marks;
    
    displayStudent(s);
    return 0;
} 