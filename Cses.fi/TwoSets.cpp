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
template<typename T>void cinVec(const T& _vector) {for (auto &i : _vector) cin >> i;}
template <typename T>void coutVec(const T& _vector) {for (auto &i : _vector) {cout << i << ' ';}cout << '\n';}
template < typename T>
pbi VECFIND(const vector<T>& v, const T& mem) {
    pbi res;
    auto it = find(v.begin(), v.end(), mem);
    if (it != v.end()) {res.F = true;res.S = distance(v.begin(), it);}
    else {res.F = false; res.S = -1;}
    return res;
}

int32_t main() {
	FAST

	int n; cin >> n;
    if ((n*(n+1)/2)&1) {
        return cout << "NO\n", 0;
    }
    vi v1, v2; 
    int j = 0;
    (n%4)?j=3:j=4;
    for (int i=0; i<(n-1)/4; ++i) {
        v1.EB(4*i+1+j);
        v1.EB(4*i+4+j);
        v2.EB(4*i+2+j);
        v2.EB(4*i+3+j); 
    }
    if (n%4) {
        v1.EB(1);
        v1.EB(2);
        v2.EB(3);
    }
    else {
        v1.EB(1);
        v1.EB(4);
        v2.EB(2);
        v2.EB(3);
    }
    SORT(v1); SORT(v2);
    cout << "YES\n";
    cout << v1.size() << '\n';
    coutVec(v1);
    cout << v2.size() << '\n';
    coutVec(v2);
	return 0;
}