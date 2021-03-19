#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
 
int perimeter(int a, int b, int c) {
    return a + b + c;
}
 
double area(int a, int b, int c) {
    double p = perimeter(a, b, c) / (double) 2.0;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}
 
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << fixed << setprecision(2);
    
    if (a >= b + c || b >= a + c || c >= a + b) {
        cout << -1.00;
    }
    else {
        cout << area(a, b, c);
    }
    
    return 0;
}