#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, substr;
    
    cout << "Enter the main string: ";
    getline(cin, str);
    
    cout << "Enter substring to delete: ";
    getline(cin, substr);
    
    size_t pos = str.find(substr);
    if (pos != string::npos) {
        str.erase(pos, substr.length());
        cout << "String after deletion: " << str << endl;
    } else {
        cout << "Substring not found!" << endl;
    }
    
    return 0;
} 