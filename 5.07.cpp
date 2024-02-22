#include <iostream>
#include <iomanip>
using namespace std;

#include <cmath>

double i = 1.0, ans = 0.00;

double calculate(int n) {
    if (n < i) {
        return ans;
    }
    else {
        ans += i;
        ans = sqrt(ans);
        ++i;
        return calculate(n);
    }
}

int main() {
#ifdef LOCAL_DEBUG
    freopen("C:/Users/Admin/Competitive-Programming/UIT/I.inp", "r", stdin);
    freopen("C:/Users/Admin/Competitive-Programming/UIT/O.out", "w", stdout);
#endif
    int n;
    cin >> n;
    cout << fixed << setprecision(2) << calculate(n);
    return 0;
}
