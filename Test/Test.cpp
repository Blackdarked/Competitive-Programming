#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
#define REVSORT(v) sort(v.begin(), v.end(), greater<int>())
#define PB push_back

ll getIndex(const vector<ll>& v, const void* K) {
	auto it = find(v.begin(), v.end(), *(ll*)K);
	return it != v.end() ? it - v.begin() : -1;
}

signed main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    ll n, tmp, count(0);
    vll v;
    cin >> n;
    for (ll i=0; i<n; ++i) {
        cin >> tmp;
        v.PB(tmp);
    }
    auto i = min_element(v.begin(), v.end());
    auto j = min_element(i, v.end());
    auto k = max_element(j, v.end());
    cout << *i - *j * 3 + *k * 2;
    return 0;
}