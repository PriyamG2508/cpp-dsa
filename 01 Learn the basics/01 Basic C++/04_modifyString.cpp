#include <iostream>
using namespace std;

string modifyString(string str) {
    string newStr = str;
    newStr[0] = toupper(newStr[0]); // Capitalize the first character

    return newStr;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    string modifiedStr = modifyString(str);
    cout << "Original string: " << str << endl;
    cout << "Modified string: " << modifiedStr << endl;

    return 0;
}