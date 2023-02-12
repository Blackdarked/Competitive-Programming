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

ll pos[100000];

int32_t main() {
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);

    ll n, m, Vasya = 0, Petya = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        pos[tmp] = i + 1;
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        int q;
        cin >> q;
        Vasya += pos[q];
        Petya += n - pos[q] + 1;
    }
        cout << Vasya << ' ' << Petya << '\n';
    return 0;
}