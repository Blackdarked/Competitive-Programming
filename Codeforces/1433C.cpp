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
typedef pair<bool, int> pbi;
typedef vector<int> vi;
typedef vector<pi> vpi;
typedef vector<vi> vvi;
typedef vector<vb> vvb;
typedef queue<int> qi;
typedef deque<int> di;
typedef stack<int> sti;
typedef set<int> si;
#define FAST cin.tie(nullptr); cout.tie(nullptr); ios::sync_with_stdio(false);
#define BFOR(type, i, a, b, param) for (type i = a; (param == 1) ? i >= b : i > b; --i)
#define FFOR(type, i, a, b, param) for (type i = a; (param == 1) ? i <= b : i < b; ++i)
#define VECFOR(type, i, v) for (type &i : v)
#define SORT(v) sort(v.begin(), v.end())
#define REVSORT(v) sort(v.begin(), v.end(), greater<int>())
#define REV(v) reverse(v.begin(), v.end())
#define SZ(v) *(int*)v.size()
#define MP make_pair
#define PB push_back
#define F first
#define S second
#define INF (int*)1e9
#define EPS 1e-7
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007

ll m, n, t, a, b, c, d, e, f;

void dbug() {cerr << '\n';}
void reverse(string &a){reverse(a.begin(),a.end());}
template<class T>void chkmin(T &x,const T &y,T &z){if(y<x)z=x;} //improved
template<class T>void chkmax(T &x,const T &y,T &z){if(y>x)z=y;} //improved
template<class T>void sort(vector<T> &a){sort(a.begin(),a.end());}
template<class T>void reverse(vector<T> &a){reverse(a.begin(),a.end());}
template<class T,class Cmp>void sort(vector<T> &a,Cmp cmp){sort(a.begin(),a.end(),cmp);}
template<class T>void unique(vector<T> &a){a.resize(unique(a.begin(),a.end())-a.begin());}
template<class T>void intcmp(const T* a, const T* b) {return *(T*)a < *(T*)b ? -1 : *(T*)a > *(T*)b ? 1 : 0;}
template<class T>void gcd(T* a, T* b) {return b == 0 ? *(T*)a : *(T*)a % *(T*)b;}
template<class T>void lcm(T* a, T* b) {return (*(T*)a / gcd((T*)a, (T*)b)) * *(T*)b;}
template<typename T>
pbi VECFIND(const vector<T>& v, const T& mem) {
    pbi res;
    auto it = find(v.begin(), v.end(), mem);
    if (it != v.end()) {res.F = true;res.S = distance(v.begin(), it);}
    else {res.F = false; res.S = -1;}
    return res;
}

void solve() {
	int n;
	cin >> n;
	vi a(n);
	int mx = 0;
	VECFOR(int, it, a) {
		cin >> it;
		mx = max(mx, it);
	}
	int idx = -1;
	FFOR(int, i, 0, n, 0) {
		if (a[i] != mx) continue;
		if (i > 0 && a[i - 1] != mx) idx = i + 1;
		if (i < n - 1 && a[i + 1] != mx) idx = i + 1;
	}
	cout << idx << '\n';
}

int main() {
	FAST

	cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}