#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int p, Petya, Vasya, Tonya, number(0);
    while (n--) {
        cin >> Petya >> Vasya >> Tonya;
        if (Petya + Vasya + Tonya >= 2) {
            number += 1;
        }
    }
    cout << number << endl;
    return 0;
}