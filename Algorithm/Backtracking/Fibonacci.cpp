#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<char> vc;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef vector<pi> vii;


pi fib(int n) {
    if (n == 0)
        return {0, 1};
    auto p = fib(n >> 1);
    int c = p.first * (2 * p.second - p.first);
    int d = p.first * p.first + p.second * p.second;
    if (n & 1) {
        return {d, c + d};
    }
    else
        return {c, d};
}

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    pi res = fib(n);
    cout << res.first << " " << res.second << "\n";
    return 0;
}