#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

    int k, n, w;
    cin >> k >> n >> w;
    ll ans = 0;
    for (int i = 1; i <= w; i++) {
        ans += i * k;
    }
    if (ans <= n) {
        cout << 0 << endl;
    }
    else {
        cout << ans - n << endl;
    }
    return 0;
}