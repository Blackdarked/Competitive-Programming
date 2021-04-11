#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<char> vc;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef vector<pi> vii;

int extendedEuclidean(int a, int m, int p, int q) {
    int x, y;
    int g = extendedEuclidean(a, m, x, y);
    if (g != 1) {
        cout << "NO SOLUTION" << "\n";
        return 0;
    }
    else {
        x = (x % m + m) % m;
        cout << x << "\n";
        return 0;
    }
}

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);

    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int res = extendedEuclidean(a, b, c, d);
    cout << res << "\n";
    return 0;
}