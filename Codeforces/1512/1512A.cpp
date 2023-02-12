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
typedef queue<int> qi;
typedef stack<int> si;

void solve() {
    int n, arr[100];
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    for (int i = 2; i <= n; i++) {
        if (arr[i-1] != arr[i] && arr[i] != arr[i+1]) {
            cout << i << "\n";
            break;
        }
        else if (arr[i-1] != arr[i] && arr[i] == arr[i+1]) {
            cout << i - 1 << "\n";
        }
        else
            continue;
    }
}

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);

    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
        return 0;
}