#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    int mx(0);
    ll ans(0);
    for (int i = 0; i < n; ++i) {
        int x(0);
        cin >> x;
        mx = max(x, mx);
        ans += mx - x;
    }
    cout << ans;
    return 0;
}