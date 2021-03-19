#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, num, rem, rev = 0;
    cin >> num;
    n = num;

    do {
        rem = num % 10;
        rev = rem + rev*10;
        num /= 10;
    } while (num != 0);

    if (n == rev) {
        cout << n <<" is a palindrome";
    }
    else {
        cout << n <<" is NOT a palindrome";
    }
    return 0;
}