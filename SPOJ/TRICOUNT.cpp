#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);

    ll n, m, total(0);
    cin >> n;
    for (ll i = 0; i < n; i++) {
        cin >> m;
        if (m % 2 == 0)
            total = (m * (m + 2) * (2 * m + 1)) / 8;
        else 
            total = (m * (m + 2) * (2 * m + 1) - 1) / 8;
        cout << total << "\n";
    }
    return 0;
}