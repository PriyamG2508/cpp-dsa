#include <iostream>
using namespace std;

bool isPalindrome(int x) {
    if (x < 0) return false;

    long final = 0;
    int temp = x;
    while(temp > 0){
        int rem = temp%10;
        temp /= 10;
        final = 10*final + rem;
    }

    return (final == x) ? true : false;
}

int main() {
    int n; 
    cout << "Enter the number: ";
    cin >> n;

    cout << "Given number is palindrome: " << isPalindrome(n);

    return 0;
}