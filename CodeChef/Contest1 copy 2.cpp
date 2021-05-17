/*
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll power(ll x, ll y, ll p) {
    ll res = 1;
    x %= p;
    if (x == 0)
        return 0;
    while (y > 0) {
        if (y & 1)
            res = (res * x) % p;
        y >>= 1;
        x = (x * x) % p;
    }
    return res;
}

int32_t main() {
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);

    int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        ll a = power(2, n - 1, 10000000007);
        cout << a << '\n';
    }
    return 0;
}

*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
ll power (ll x, ll y,ll p) {
    ll res = 1;
    x = x % p;
    if(x == 0)
        return 0;
    while(y > 0) {
        if(y & 1)
            res = (res * x) % p;
        y >>= 1;
        x = (x * x) % p;
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        ll ans = power(2, n - 1, mod);
        cout << ans << endl;
    }
    return 0;
}