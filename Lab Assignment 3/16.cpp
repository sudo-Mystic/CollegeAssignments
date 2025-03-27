#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    bool isPalindrome = true;
    
    cout << "Enter a string: ";
    getline(cin, str);
    
    for (int i = 0; i < str.length()/2; i++) {
        if (str[i] != str[str.length()-1-i]) {
            isPalindrome = false;
            break;
        }
    }
    
    if (isPalindrome)
        cout << "String is palindrome" << endl;
    else
        cout << "String is not palindrome" << endl;
        
    return 0;
} 