#include<bits/stdc++.h>
using namespace std;

#define nl '\n'

double check = -100000;

struct Point {
    double x, y;
};

pair<double, double> Cramer(double m1, double m2, double x1, double x2, double y1, double y2) {
    double d, dx, dy;
    d = m2 - m1;
    if (d == 0) return { check, check };
    dx = (m2 * x2 - y2) - (m1 * x1 - y1);
    dy = (m1 * m2 * x2 - y2) - (m2 * m1 * x1 - y1);

    double x = dx / d, y = dy / d;
    return { x, y };
}

void solve() {
    Point a, b, c; cin >> a.x >> a.y >> b.x >>  b.y >> c.x >> c.y;
    Point m1, m2; m1 = -1 / (b.x - a.x / b.y - a.y), m2 = -1 / (c.x - a.x / c.y - a.y);
    pair<double, double> ans = Cramer(m1, m2, c.x, c.y, b.x, b.y);
    if (ans == {check, check}) cout << "NO SOLUTION";
    else cout << ans.F << ' ' << ans.S;
}


int32_t main() {
    solve();
    return 0;
}