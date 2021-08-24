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


/*------------------------------------------------------------Main Libraries------------------------------------------------------------*/


#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>


/*---------------------------------------------------------------Namespace--------------------------------------------------------------*/

using namespace std;
using namespace __gnu_pbds;
namespace IO {
    const int BUFFER_SIZE = 1 << 15;
 
    char input_buffer[BUFFER_SIZE];
    size_t input_pos = 0, input_len = 0;
 
    char output_buffer[BUFFER_SIZE];
    int output_pos = 0;
 
    char number_buffer[100];
    uint8_t lookup[100];
 
    void _update_input_buffer() {
        input_len = fread(input_buffer, sizeof(char), BUFFER_SIZE, stdin);
        input_pos = 0;
 
        if (input_len == 0)
            input_buffer[0] = EOF;
    }
 
    inline char next_char(bool advance = true) {
        if (input_pos >= input_len)
            _update_input_buffer();
 
        return input_buffer[advance ? input_pos++ : input_pos];
    }
 
    inline bool isspace(char c) {
        return (unsigned char) (c - '\t') < 5 || c == ' ';
    }
 
    inline void read_char(char &c) {
        while (isspace(next_char(false)))
            next_char();
 
        c = next_char();
    }
 
    template<typename T>
    inline void read_int(T &number) {
        bool negative = false;
        number = 0;
 
        while (!isdigit(next_char(false)))
            if (next_char() == '-')
                negative = true;
 
        do {
            number = 10 * number + (next_char() - '0');
        } while (isdigit(next_char(false)));
 
        if (negative)
            number = -number;
    }
 
    template<typename T, typename... Args>
    inline void read_int(T &number, Args &... args) {
        read_int(number);
        read_int(args...);
    }
 
    inline void read_str(string &str) {
        while (isspace(next_char(false)))
            next_char();
 
        str.clear();
 
        do {
            str += next_char();
        } while (!isspace(next_char(false)));
    }
 
    void _flush_output() {
        fwrite(output_buffer, sizeof(char), output_pos, stdout);
        output_pos = 0;
    }
 
    inline void write_char(char c) {
        if (output_pos == BUFFER_SIZE)
            _flush_output();
 
        output_buffer[output_pos++] = c;
    }
 
    template<typename T>
    inline void write_int(T number, char after = '\0') {
        if (number < 0) {
            write_char('-');
            number = -number;
        }
 
        int length = 0;
 
        while (number >= 10) {
            uint8_t lookup_value = lookup[number % 100];
            number /= 100;
            number_buffer[length++] = char((lookup_value & 15) + '0');
            number_buffer[length++] = char((lookup_value >> 4) + '0');
        }
 
        if (number != 0 || length == 0)
            write_char(char(number + '0'));
 
        for (int i = length - 1; i >= 0; i--)
            write_char(number_buffer[i]);
 
        if (after)
            write_char(after);
    }
 
    inline void write_str(const string &str, char after = '\0') {
        for (char c : str)
            write_char(c);
 
        if (after)
            write_char(after);
    }
 
    void init() {
        // Make sure _flush_output() is called at the end of the program.
        bool exit_success = atexit(_flush_output) == 0;
        assert(exit_success);
 
        for (int i = 0; i < 100; i++)
            lookup[i] = uint8_t((i / 10 << 4) + i % 10);
    }
}


/*---------------------------------------------------------------Typedefs---------------------------------------------------------------*/


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
typedef struct node {int value; struct node *next;}node;


/*----------------------------------------------------------------Defines---------------------------------------------------------------*/


#define FAST cin.tie(nullptr); cout.tie(nullptr); ios::sync_with_stdio(false);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define SORT(v) sort(v.begin(), v.end())
#define REVSORT(v) sort(v.begin(), v.end(), greater<int>())
#define REV(v) reverse(v.begin(), v.end())
#define SZ(v) (int)v.size()
#define CINVEC(v) for(auto &i : v)
#define MP make_pair
#define EB emplace_back
#define PB push_back
#define F first
#define S second
#define ins insert
#define INF 1e9
#define EPS 1e-7
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007


/*---------------------------------------------------------------Functions--------------------------------------------------------------*/


void dbug() {cerr << '\n';}

template<class Fun> class y_combinator_result {
    Fun fun_;
public:
    template<class T> explicit y_combinator_result(T &&fun): fun_(std::forward<T>(fun)) {}
    template<class ...Args> decltype(auto) operator()(Args &&...args) {
        return fun_(std::ref(*this), std::forward<Args>(args)...);
    }
};
template<class Fun> decltype(auto) y_combinator(Fun &&fun) {
    return y_combinator_result<std::decay_t<Fun>>(std::forward<Fun>(fun)); 
}

template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) {
    return os << '(' << p.first << ", " << p.second << ')'; 
}

template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream &os, const T_container &v) { 
    os << '{'; 
    string sep; 
    for (const T &x : v) {
        os << sep << x, sep = ", ";
    }
    return os << '}'; 
}

template<typename T>void chkmin(T &x, const T &y) {
    if (y < x) x = y;
}

template<typename T>void chkmax(T &x,const T &y) {
    if (y > x) x = y;
}

template<typename T,class Cmp>void sort(vector<T> &a,Cmp cmp) {
    sort(a.begin(),a.end(),cmp);
}

template<typename T>void unique(vector<T> &a) {
    a.resize(unique(a.begin(), a.end()) - a.begin());
}

template<typename T>void intcmp(const T* a, const T* b) {
    return *(T*)a < *(T*)b ? -1 : *(T*)a > *(T*)b ? 1 : 0;
}

template<typename T>void lcm(T* a, T* b) {
    return (*(T*)a / gcd((T*)a, (T*)b)) * *(T*)b;
}

ll gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a % b);
}

template<typename T>bool isPowerofTwo(T* x) {
    return *(T*)x && (!(*(T*)x & (*(T*)x - 1)));
}

template<typename T>ll pow(T x, T y, T p) {
    T res = 1;
    x %= p;
    while(y > 0) {
        y & 1 ? res = (res * x) % p : y+0;
        y >>= 1;
        x = (x * x) % p; 
    }
    return res;
}

template<typename T>ll modInverse(T n, T p) {
    return pow(n, p - 2, p);
}

ll f[1000001];

ll nCrModPFermat(ull n, ll r, ll p) {
    return r ? 1 : (f[n] * modInverse(f[r], p) % p * modInverse(f[n - r], p) % p) % p;
}

template<typename T>void extgcd(T a, T b, T* x, T* y) {
    if (a == 0) {
        *x = 0; *y = 1;
        return b;
    }
    T x1, y1, gcd = extgcd(b%a, a, &x1, &y1);
    *x = y1-(b/a)*x1;
    *y = x1;
    return gcd;
}

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


// x & y locale
// const int dx[] = {1,0,-1,0,1,1,-1,-1};
// const int dy[] = {0,-1,0,1,1,-1,-1,1};


//mt19937
// auto random_address = [] { char *p = new char; delete p; return uint64_t(p); };
// const uint64_t SEED = chrono::steady_clock::now().time_since_epoch().count() * (random_address() | 1);
// mt19937_64 rng(SEED);
// mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());


/*--------------------------------------------------------------Solve Part--------------------------------------------------------------*/

#define N 1e5;

void solve() {
    int n, m, c = 0; cin >> n >> m;
    vi v(n), s(n);
    CINVEC(v) {
        cin >> i;
    }
    for(int i=1; i<=m; ++i) {
        for(int j=0; j<n; ++j) {
            if (gcd(v[j], i) == 1) {
                c == n ? s.EB(i), c = 0 : ++c;
            }
        }
    }
    cout << s.size() << '\n';
    rep(i, 0, s.size()) {
        cout << s[i] << '\n';
    }
}


/*----------------------------------------------------------------Driver----------------------------------------------------------------*/


int32_t main() {
	FAST solve();
	return 0;
}


/*-----------------------------------------------------------------EOF------------------------------------------------------------------*/