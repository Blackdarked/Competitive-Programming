#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

    int n, p;
    cin >> n;
    vi f(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> p;
        f[p] = i;
    }
    cout << f[1];
    for (int i = 2; i <= n; ++i) {
        cout << " " << f[i];
    }
    return 0;
}
