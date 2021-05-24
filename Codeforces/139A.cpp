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

    int n, i(0);
    cin >> n;
    int ans[7] = {0};
    for (int i = 0; i < 7; i++)
        cin >> ans[i];
    int t = ans[0];
    while(t < n) {
        i++;
        i %= 7;
        t += ans[i];
    }
    cout << ++i << '\n';
    return 0;
}