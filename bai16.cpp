#include<bits/stdc++.h>

using namespace std;

void solve() {
    double x, y, a, b; cin >> x >> y >> a;
    b = y - a * x;
    cout << "y = " << a << "x";
    if (b < 0) cout << " - " << -b;
    else cout << b;
}


int32_t main() {
    solve();
    return 0;
}