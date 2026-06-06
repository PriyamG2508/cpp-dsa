#include <iostream>
using namespace std;

void invertedRightTriangle(int n){
    for(int i=n; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout << j;
        }
        cout << endl;
    }
}

int main(){
    int n;
    cout << "Enter the number of N: ";
    cin >> n;

    invertedRightTriangle(n);
    return 0;
}