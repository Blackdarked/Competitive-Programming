#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll MulDiv(ll x, ll y, ll z) {
    ll m = x, n = z;
    while (n != 0) {
        int r = m % n;
        m = n;
        n = r;
    }
    x /= m;
    z /= m;
    return y / z * x;
}

void PrintLine(int x)
{
    ll c = 1;
    for (int i = 0; i < x; i++) {
        cout << c << " ";
        c = MulDiv(c, x - i, i + 1);
    }
    cout << 1 << endl;
}

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);

    int m;
    cin >> m;
    for (int i = 0; i <= m; i++) {
        PrintLine(i);
    }
    return 0;
}