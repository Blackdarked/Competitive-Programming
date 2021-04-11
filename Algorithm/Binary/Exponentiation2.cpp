#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<char> vc;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef vector<pi> vii;

//Binary Exponentiation Using Loop Function
ll binpow(ll a, ll b) {
    ll res = 1;
    while (b > 0) {
        if (b & 1)
            res *= a;
        a *= a;
        b >>= 1;
    }
    return res;
}

    int main()
{
    cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);

    ll a, b, sol;
    cin >> a >> b;
    sol = binpow(a, b);
    cout << sol << "\n";
    return 0;
}