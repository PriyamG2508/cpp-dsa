#include <iostream>
using namespace std;

void rectangularStarPattern(int row, int cols){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < cols; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    int row, cols;
    cout << "Enter the number of rows: ";
    cin >> row;
    cout << "Enter the number of columns: ";
    cin >> cols;

    rectangularStarPattern(row, cols);
    return 0;
}