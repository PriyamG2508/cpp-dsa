#include <iostream>
using namespace std;

void rightTriangleStarPattern(int row) {
    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    int row;
    cout << "Enter the number of rows: ";
    cin >> row;
    
    rightTriangleStarPattern(row);
    return 0;
}