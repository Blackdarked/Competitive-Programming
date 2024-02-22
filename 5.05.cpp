#include <iostream>
using namespace std;

int input(int& n) {
    cin >> n;
    return n;
}

int sum(int &n, int &s) {
    if (n < 10) {
        s += n;
        return s;
    }
    else {
        s += n % 10;
        n /= 10;
        return s + sum(n, s);
    }
}

int main() {
#ifdef LOCAL_DEBUG
    freopen("C:/Users/Admin/Competitive-Programming/UIT/I.inp", "r", stdin);
    freopen("C:/Users/Admin/Competitive-Programming/UIT/O.out", "w", stdout);
#endif
    int n, s = 0;
    input(n);
    sum(n, s);
    cout << s;
}
