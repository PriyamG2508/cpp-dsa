#include <iostream>
using namespace std;

void accessCharacter(string s){

    for (char c : s) {
        cout << c << " ";
    }
    cout << endl;
}

int main() {
    string s;
    cout << "Enter the string: ";
    getline(cin, s);

    accessCharacter(s);
    return 0;
}