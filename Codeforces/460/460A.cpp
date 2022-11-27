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


/*--------------------------------------Main Libraries------------------------------------*/


#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>


/*----------------------------------------Namespaces--------------------------------------*/


using namespace std;
using namespace __gnu_pbds;


/*-----------------------------------------Typedefs---------------------------------------*/


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
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;


/*----------------------------------------Defines-----------------------------------------*/


#define FAST cin.tie(nullptr); cout.tie(nullptr); ios::sync_with_stdio(false);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define SORT(v) sort(v.begin(), v.end())
#define REVSORT(v) sort(v.begin(), v.end(), greater<int>())
#define REV(v) reverse(v.begin(), v.end())
#define SZ(v) (int)v.size()
#define MP make_pair
#define EB emplace_back
#define PB push_back
#define F first
#define S second
#define INF (int*)1e9
#define EPS 1e-7
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007


/*--------------------------------------Functions-----------------------------------------*/


void dbug() {cerr << '\n';}
void reverse(string &a){reverse(a.begin(),a.end());}
template<typename T>void chkmin(T &x,const T &y){if(y<x)x=y;}
template<typename T>void chkmax(T &x,const T &y){if(y>x)x=y;}
template<typename T>void sort(vector<T> &a){sort(a.begin(),a.end());}
template<typename T>void reverse(vector<T> &a){reverse(a.begin(),a.end());}
template<typename T,class Cmp>void sort(vector<T> &a,Cmp cmp){sort(a.begin(),a.end(),cmp);}
template<typename T>void unique(vector<T> &a){a.resize(unique(a.begin(),a.end())-a.begin());}
template<typename T>void intcmp(const T* a, const T* b) {return *(T*)a < *(T*)b ? -1 : *(T*)a > *(T*)b ? 1 : 0;}
template<typename T>void gcd(T* a, T* b) {return b == 0 ? *(T*)a : *(T*)a % *(T*)b;}
template<typename T>void lcm(T* a, T* b) {return (*(T*)a / gcd((T*)a, (T*)b)) * *(T*)b;}
template<typename T>pbi VECFIND(const vector<T>& v, const T& mem) {
    pbi res;
    auto it = find(v.begin(), v.end(), mem);
    if (it != v.end()) {res.F = true;res.S = distance(v.begin(), it);}
    else {res.F = false; res.S = -1;}
    return res;
}
template<typename T>int findgcd(const T& _vector, const T& n) {
	int res = 0;
	rep(i, 1, n) {
		res = gcd(_vector[i], res);
		if (res == 1) return 1;
	}
	return res;
}


/*--------------------------------------Solve Part----------------------------------------*/


void solve() {
	int n, m; cin >> n >> m;
    int count = 0;
    for (int i=1; i<=n; ++i) {
        ++count;
        if (i % m == 0) ++n;
    }
    cout << count;
}


/*-----------------------------------------Driver-----------------------------------------*/


int32_t main() {
	FAST

	//while(t--) {
		solve();
	//}
	return 0;
}


/*------------------------------------------EOF-------------------------------------------*/