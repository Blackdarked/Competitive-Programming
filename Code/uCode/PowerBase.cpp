#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main() {
    float X;
    int p;
    cin >> X >> p;
    cout << fixed << setprecision(2) << pow(X, p);
    return 0;
}