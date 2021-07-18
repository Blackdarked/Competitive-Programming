/* Replace the main library with other libraries
#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <chrono>
#include <cmath>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <vector>
*/
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
#define BFOR(type, i, a, b, param) for (int i = a; (param == 1) ? i >= b : i > b; --i)
#define FFOR(type, i, a, b, param) for (int i = a; (param == 1) ? i <= b : i < b; ++i)
#define SORT(v) sort(v.begin(), v.end())
#define REVSORT(v) sort(v.begin(), v.end(), greater<int>())
#define REV(v) reverse(v.begin(), v.end())
#define SZ(v) *(*int)v.size()
#define MP make_pair
#define PB push_back
#define INF (int*)1e9;
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007

ll m, n, t, a, b, c, d, e, f;

void dbug() {cerr << '\n';}

ll intcmp(const void* a, const void* b) {
	return *(int*)a < *(int*)b ? -1 :
		   *(int*)a > *(int*)b ?  1 :
		   						  0 ;
}

ll gcd(ll* a, ll* b) {
	return b == 0 ? *(ll*)a : *(ll*)a % *(ll*)b;
}

ll lcm(ll* a, ll* b) {
	return (*(ll*)a / gcd((ll*)a, (ll*)b)) * *(ll*)b;
}

ll getIndex(const vector<int>& v, const void* K) {
	auto it = find(v.begin(), v.end(), *(ll*)K);
	return it != v.end() ? it - v.begin() : -1;
}

bool check(ull n) {
    if (n < 2) return false;
    for (ull i=2; i*i<=n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

void solve() {
    ull a, b; cin >> a >> b;
    FFOR(ull, i, a, b, 1) {
        if (check(i)) cout << i << '\n';
        else continue;
    }
}

int main() {
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);

	solve();
	return 0;
}