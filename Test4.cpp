#include<bits/stdc++.h>
using namespace std;

#define nl '\n'

void solve() {
    double a, b, c, x1, x2; cin >> a >> b >> c;
    double x(0), y(0), delta = sqrt(pow(b, 2) - 4 * a * c);

    if (delta < 0) cout << "NO SOLUTION";

    else if (delta == 0) {
        x = y = -b / (2 * a);
        if (x < 0) cout << "NO SOLUTION";
        else if (x == 0) cout << "x = 0";
        else cout << "x1 = " << x << nl << "x2 = " << y;
    }

    else {
        delta = sqrt(delta);
        x = (-b + delta) / (2 * a);
        y = (-b - delta) / (2 * a);

        if (x < 0) {
            if (y < 0) cout << "NO SOLUTION";
            else if (y == 0) cout << "x = 0";
            else cout << "x1 = " << sqrt(y) << nl << "x2 = " << -sqrt(y);

        }
        else if (x == 0) {
            if (y < 0) cout << "x = 0";
            else cout << "x1 = " << sqrt(y) << nl << "x2 = " << -sqrt(y) << nl << "x3 = 0";
        }
        else {
            if (y < 0) cout << "x1 = " << sqrt(x) << nl << "x2 = " << -sqrt(x) << nl;
            else if (y == 0) cout << "x1 = " << sqrt(x) << nl << "x2 = " << -sqrt(x) << "x3 = 0";
            else cout << "x1 = " << sqrt(x) << nl << "x2 = " << -sqrt(x) << nl << "x3 = " << sqrt(y) << nl << "x4 = " << -sqrt(y);
        }
    }
}


int32_t main() {
    solve();
    return 0;
}