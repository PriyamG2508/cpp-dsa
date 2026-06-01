#include <iostream>
using namespace std;

int main() {
    string s;
    cout << "Enter the string: ";
    getline(cin, s);

    int length = 0;
    for (char c : s) {
        length++;
    }

    cout << "Length of the string: " << length << endl;
    return 0;
}