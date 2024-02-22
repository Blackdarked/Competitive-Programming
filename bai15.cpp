#include<bits/stdc++.h>
using namespace std;
#define nl '\n'

void solve() {
    double x, e; cin >> x >> e;
    int a, b;

    for (b = 1; b <= 10000; ++b) {
        a = round((x + e) * b);
        if (abs((double)a / b - (x + e)) < 1e-6) {
            cout << "a = " << a << ", b = " << b << nl;
            return;
        }
        a = round((x - e) * b);
        if (abs((double)a / b - (x - e)) < 1e-6) {
            cout << "a = " << a << ", b = " << b << nl;
            return;
        }   
    }
    cout << "NO SOLUTION";
}
    

int32_t main() {
    solve();
    return 0;
}