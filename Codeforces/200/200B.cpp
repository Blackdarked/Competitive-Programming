#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<char> vc;
typedef vector<bool> vb;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef vector<vi> vvi;
typedef vector<vb> vvb;
typedef queue<int> qi;

int32_t main() {
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);

    int n, a;
    cin >> n;
    double sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a;
        sum += a;
    }
    sum /= n;
    cout << setprecision(12) << fixed << sum << '\n';
    return 0;
}