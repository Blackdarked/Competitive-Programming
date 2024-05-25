// #include<bits/stdc++.h>


// using namespace std;


// typedef long long ll;
// typedef unsigned long long ull;
// typedef long double ld;
// typedef vector<ll> vll;
// typedef vector<char> vc;
// typedef vector<bool> vb;
// typedef pair<int, int> pi;
// typedef pair<bool, int> pbi;
// typedef pair<ll, ll> pll;
// typedef vector<int> vi;
// typedef vector<pi> vpi;
// typedef vector<vi> vvi;
// typedef vector<vb> vvb;
// typedef queue<int> qi;
// typedef deque<int> di;
// typedef stack<int> sti;


// #define FAST cin.tie(nullptr); cout.tie(nullptr); ios::sync_with_stdio(false);
// #define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
// #define REV(v) reverse(v.begin(), v.end())
// #define SZ(v) (int)v.size()
// #define TRAV(v) for(auto &e : v)
// #define ALLVEC(v) v.begin(), v.end()
// #define MP make_pair
// #define EB emplace_back
// #define PB push_back
// #define F first
// #define S second
// #define ins insert
// #define INF (ll)1e17
// #define EPS 1e-7
// #define PI 3.1415926535897932384626433832795
// #define MOD 1000000007
// #define nl '\n'


// template <typename T> void ckmin(T& a, const T& b) { a = min(a, b); }
// template <typename T> void ckmax(T& a, const T& b) { a = max(a, b); }


// ll n, m, k, q, l, r, x, y, z;
// ll ans = 0;


// mt19937 rd(chrono::steady_clock::now().time_since_epoch().count());
// int Rand(int l, int r) { return l + rd() % (r - l + 1); }

// struct P {
//     string s;
//     int c;
// };

// bool cmp(const string& a, const string& b) {
//     if (a.size() == b.size()) {
//         rep(i, 0, a.size()) {
//             if (a[i] < b[i]) return 1;
//         }
//         return 0;
//     }
//     return (a.size() < b.size());
// }

// template<typename T>
// int partition(vector<T>& v, int l, int h) {
//     T pivot = v[h];
//     int i = l - 1;
//     rep(j, l, h) {
//         if (v[j].c > pivot.c or (v[j].c == pivot.c and cmp(v[j].s, pivot.s))) {
//             i++;
//             swap(v[i], v[j]);
//         }
//     }
//     swap(v[i + 1], v[h]);
//     return i + 1;
// }

// template<typename T>
// void qs(vector<T>& v, int l, int h) {
//     if (l < h) {
//         int p = partition(v, l, h);
//         qs(v, l, p - 1);
//         qs(v, p + 1, h);
//     }
// }


// void solve() {
//     cin >> n;
//     vector<string> str(n);
//     vector<P> cnt;

//     rep(i, 0, n) { cin >> str[i]; }
//     qs(str, 0, n - 1);

//     rep(i, 0, n) {
//         int count = 0;
//         string cur = str[i];
//         while (i < n and str[i] == cur) {
//             i++;
//             count++;
//         }
//         cnt.PB({ cur, count });
//     }
//     qs(cnt, 0, cnt.size() - 1);

//     rep(i, 0, cnt.size()) {
//         cout << cnt[i].s << ' ' << cnt[i].c << nl;
//     }

//     // vector<P> v(n, { "0",0 });
//     // qs(v, 0, n - 1);

//     // int i = 0, j = 0;
//     // while (i < n) {
//     //     if (v[i].F != v[i + 1].F) {
//     //         while (j <= i and j < n) {
//     //             if (v[j] == v[i]) {
//     //                 v[i].S++;
//     //                 j++;
//     //             }
//     //         }
//     //     }
//     //     i++;
//     // }

//     // qs(v, 0, n - 1);
//     // rep(i, 0, n) {
//     //     if (v[i].S != 0) cout << v[i].F << ' ' << v[i].S << nl;
//     // }
// }


// int32_t main() {
// #ifdef LOCAL_DEBUG
//     freopen("C:/Users/Admin/Competitive-Programming/UIT/I.inp", "r", stdin);
//     freopen("C:/Users/Admin/Competitive-Programming/UIT/O.out", "w", stdout);
// #endif
//     FAST solve();
//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// struct item {
//     string code;
//     int count;
// };

// bool cmp(string s, string t) {
//     if (s.length() != t.length()) {
//         return s.length() < t.length() ? true : false;
//     }
//     if (s.length() == t.length()) {
//         return s < t ? true : false;
//     }
//     for (size_t i = 0; i < s.length(); ++i) {
//         if (s[i] != t[i]) {
//            return s[i] < t[i] ? true : false;
//         }
//     }
//     return false;
// }

// int partitionCodes(vector<string>& codes, int low, int high) {
//     string pivot = codes[high];
//     int i = (low - 1);

//     for (int j = low; j <= high - 1; j++) {
//         if (codes[j] < pivot) {
//             i++;
//             swap(codes[i], codes[j]);
//         }
//     }
//     swap(codes[i + 1], codes[high]);
//     return (i + 1);
// }

// void quickSortCodes(vector<string>& codes, int low, int high) {
//     if (low < high) {
//         int pi = partitionCodes(codes, low, high);
//         quickSortCodes(codes, low, pi - 1);
//         quickSortCodes(codes, pi + 1, high);
//     }
// }

// int partitionItems(vector<item>& items, int low, int high) {
//     item pivot = items[high];
//     int i = (low - 1);

//     for (int j = low; j <= high - 1; j++) {
//         if (items[j].count > pivot.count || (items[j].count == pivot.count && cmp(items[j].code, pivot.code))) {
//             i++;
//             swap(items[i], items[j]);
//         }
//     }
//     swap(items[i + 1], items[high]);
//     return (i + 1);
// }

// void quickSortItems(vector<item>& items, int low, int high) {
//     if (low < high) {
//         int pi = partitionItems(items, low, high);
//         quickSortItems(items, low, pi - 1);
//         quickSortItems(items, pi + 1, high);
//     }
// }

// int main() {
//     int n;
//     cin >> n;
//     vector<string> codes(n);
//     vector<item> items;

//     for (int i = 0; i < n; i++) {
//         cin >> codes[i];
//     }

//     quickSortCodes(codes, 0, codes.size() - 1);

//     for (int i = 0; i < n; ) {
//         int count = 0;
//         string current_code = codes[i];
//         while (i < n && codes[i] == current_code) {
//             i++;
//             count++;
//         }
//         items.push_back({current_code, count});
//     }

//     quickSortItems(items, 0, items.size() - 1);

//     for (auto &it : items) {
//         cout << it.code << " " << it.count << "\n";
//     }

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int N;

int count_distinct(const vector<string>& ids) {
    map<string, int> Hash;
    for (auto& i : ids) {
        Hash[i]++;
    }

    int ans = 0;
    for (auto& [k, v] : Hash) ans++;
    return ans;
}

int main(){
	ios::sync_with_stdio(false); cin.tie(nullptr);
	
	cin >> N;
	vector<string> ids(N);
	
	for (int i = 0; i < N; i++) cin >> ids[i];
		
	cout << count_distinct(ids);

	return 0;
}

