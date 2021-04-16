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
typedef stack<int> si;

vi adj[1001];

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);

    int n, m, q, a, b;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a); //For directed graph remove this line.
    }
    cin >> q;
    bool ans = false;
    for (int i = 0; i < q; i++) {
        cin >> a >> b;
        for (int j = 0; j < adj[a].size(); j++) {
            if (adj[a][j] == b) {
                cout << "YES\n";
                ans = true;
                break;
            }
        }
        if (!ans)
            cout << "NO\n";
    }
    return 0;
}

