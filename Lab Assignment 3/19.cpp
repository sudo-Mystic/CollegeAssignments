#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int main() {
    char str[100];
    
    cout << "Enter a string: ";
    cin.getline(str, 100);
    
    for (int i = 0; str[i]; i++)
        str[i] = toupper(str[i]);
    
    cout << "Uppercase string: " << str << endl;
    return 0;
} 