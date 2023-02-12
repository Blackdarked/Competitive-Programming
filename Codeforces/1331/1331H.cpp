#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef vector<ll> vll;
typedef vector<char> vc;
typedef vector<bool> vb;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vpi;
typedef vector<vi> vvi;
typedef vector<vb> vvb;
typedef queue<int> qi;
typedef deque<int> di;
typedef stack<int> sti;
typedef set<int> si;
#define FOR(i, a, b) for (int i = a; i < b; ++i)
const long long N = 1e5;
int arr[N];
ll m, n, a, b, c, d, e, f, g, h, i, j, k, l, o, p, q, r, s, t, u, v, w, x, y, z;

ull doubleFactorial(ull n) {
    if (n == 0 || n == 1) return 1;
    return n * doubleFactorial(n - 2);
}

int32_t main() {
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);

	string str; cin >> str;
    string ns, mods;
    for (int i=0; i<str.length(); ++i) {
        if (str.length()-3 <= i) {
            mods.push_back(str[i]);
        }
        else {
            ns.push_back(str[i]);
        }
    }
    //debug
    cout << ns << ' ' << mods << '\n';
    n = stoll(ns);
    ll mod = stoll(mods);
    z = doubleFactorial(n);
    cout << z << '\n';
	return cout << z % mod << '\n', 0;
}