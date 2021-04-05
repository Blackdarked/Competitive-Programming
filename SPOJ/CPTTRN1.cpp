#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<char> vc;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

void solve(int l, int c) {
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            cout << ((i + j) % 2 == 0 ? '*' : '.');
        }
        cout << "\n";
    }
    cout << "\n";
}

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    int l, c;
    while (n--) {
        cin >> l >> c;
        solve(l, c);
    }
    return 0;
}