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
#define FFOR(i, a, b, param) for (typeof(a) i = a; (param == 1) ? i <= b : i < b; ++i)
#define BFOR(i, a, b, param) for (typeof(a) i = a; (param == 1) ? i >= b : i > b; --i)
#define VECFOR(i, v) for (typeof(i) &i : v)
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
template<class T>void chkmin(T &x,const T &y){if(y<x)x=y;}
template<class T>void chkmax(T &x,const T &y){if(y>x)x=y;}
template<class T>void sort(vector<T> &a){sort(a.begin(),a.end());}
template<class T>void reverse(vector<T> &a){reverse(a.begin(),a.end());}
template<class T,class Cmp>void sort(vector<T> &a,Cmp cmp){sort(a.begin(),a.end(),cmp);}
template<class T>void unique(vector<T> &a){a.resize(unique(a.begin(),a.end())-a.begin());}
template<class T>void intcmp(const T* a, const T* b) {return *(T*)a < *(T*)b ? -1 : *(T*)a > *(T*)b ? 1 : 0;}
template<class T>void gcd(T* a, T* b) {return b == 0 ? *(T*)a : *(T*)a % *(T*)b;}
template<class T>void lcm(T* a, T* b) {return (*(T*)a / gcd((T*)a, (T*)b)) * *(T*)b;}
template < typename T>
pbi VECFIND(const vector<T>& v, const T& mem) {
    pbi res;
    auto it = find(v.begin(), v.end(), mem);
    if (it != v.end()) {res.F = true;res.S = distance(v.begin(), it);}
    else {res.F = false; res.S = -1;}
    return res;
}

ll pw(ll a, int b) {
    return b ?(pw(a * a % MOD, b >> 1) * (b & 1 ? a : 1)) % MOD : 1;
}

int main() {
	FAST
    cin >> n;
    cout << (pw(27, n) - pw(7, n) + MOD) % MOD << '\n';
	return 0;
}