#include <bits/stdc++.h>
using namespace std;

void starInvertedPyramid(int n){
    for(int i=0; i<n; i++){
        // for inital spaces 
        for(int j=1; j<=i; j++){
            cout << " ";
        }

        for(int j=0; j<2*n-2*i-1; j++){
            cout << "* ";
        }

        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the N: ";
    cin >> n; 

    starInvertedPyramid(n);

    return 0;
}