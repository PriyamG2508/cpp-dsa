#include <iostream>
using namespace std;

void compareStrings(string str1, string str2) {
    if (str1 == str2) {
        cout << "The strings are equal." << endl;
    } else {
        cout << "The strings are not equal." << endl;
    }
}

int main() {
    string str1, str2;
    cout << "Enter the first string: ";
    getline(cin, str1);
    cout << "Enter the second string: ";
    getline(cin, str2);

    compareStrings(str1, str2);

    return 0;
}