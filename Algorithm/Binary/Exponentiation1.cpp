#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<char> vc;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef vector<pi> vii;

//Binary Exponentiation Using Recursive Function
ll binpow (ll a, ll b) {
    if (b == 0)
        return 1;
    ll res = binpow(a, b / 2);
	if (b % 2)
		return res * res * a;
	else
		return res * res;
}

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);

	ll a, b, sol;
	cin >> a >> b;
	sol = binpow(a, b);
	cout << sol << "\n";
	return 0;
}