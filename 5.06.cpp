#include <iostream>

using namespace std;

long long gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}


int main() {
#ifdef LOCAL_DEBUG
    freopen("C:/Users/Admin/Competitive-Programming/UIT/I.inp", "r", stdin);
    freopen("C:/Users/Admin/Competitive-Programming/UIT/O.out", "w", stdout);
#endif
    int m, n;
    cin >> m >> n;
    cout << gcd(m, n);
    return 0;
}
