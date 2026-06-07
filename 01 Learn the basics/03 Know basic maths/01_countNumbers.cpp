#include <iostream>
using namespace std;

int countNumbers(int n){
    if (n < 10)
        return 1;  
    return 1 + countNumbers(n / 10);
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    cout << "Total no's in " << n << " is " << countNumbers(n);

    return 0;
}