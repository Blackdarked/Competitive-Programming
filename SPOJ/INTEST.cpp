#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<char> vc;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;


int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);

    int n, k, t(0), cnt(0);
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> t;
        if (t % k == 0) {
            cnt++;
        }
    }
    cout << cnt << "\n";
    return 0;
}