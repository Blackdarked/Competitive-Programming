#include<bits/stdc++.h>
using namespace std;

int SD(int x) {
    int s(0), i;
    for (int i = 1; i * i < x; i++) {
        if (x % i == 0) {
            s += i + x / i;
        }
    }
    if (i * i == x) {
        s += i;
    }
    return s - x;
}

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);

    int n, a, b;
    cin >> n;
    for (int b = 2; b <= n; b++) {
        a = SD(b);
        if (a < b && SD(a) == b) {
            cout << a << " " << b << endl;
        }
    }
    return 0;
}