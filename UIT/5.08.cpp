#include <iostream>

using namespace std;
int ans = 0, last;

int reverse(int m) {
    if (m) {
        last = m % 10;
        ans = ans * 10 + last;
        reverse(m / 10);
    }
    else {
        return ans;
    }
    return ans;
}

int main() {
#ifdef LOCAL_DEBUG
    freopen("C:/Users/Admin/Competitive-Programming/UIT/I.inp", "r", stdin);
    freopen("C:/Users/Admin/Competitive-Programming/UIT/O.out", "w", stdout);
#endif
    int n;
    cin >> n;
    cout << reverse(n);
}