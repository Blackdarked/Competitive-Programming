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
#define TRAV(v) for(auto &i : v)
#define ALLVEC(v) v.begin(), v.end()
#define MP make_pair
#define EB emplace_back
#define PB push_back
#define F first
#define S second
#define ins insert
#define INF (ll)1e17
#define EPS 1e-7
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007


struct IO { 
    static constexpr size_t buf_size = 1 << 18;
    char buf_in[buf_size], buf_out[buf_size];
    size_t pt_in = 0, pt_out = 0, tail_in = 0;
    char strs[10000 * 4];
    inline size_t num_digits(long long x) {
        if (x >= (long long)1e9) {
            if (x >= (long long)1e18) return 19;
            if (x >= (long long)1e17) return 18;
            if (x >= (long long)1e16) return 17;
            if (x >= (long long)1e15) return 16;
            if (x >= (long long)1e14) return 15;
            if (x >= (long long)1e13) return 14;
            if (x >= (long long)1e12) return 13;
            if (x >= (long long)1e11) return 12;
            if (x >= (long long)1e10) return 11;
            return 10;
        }
        else {
            if (x >= (long long)1e8) return 9;
            if (x >= (long long)1e7) return 8;
            if (x >= (long long)1e6) return 7;
            if (x >= (long long)1e5) return 6;
            if (x >= (long long)1e4) return 5;
            if (x >= (long long)1e3) return 4;
            if (x >= (long long)1e2) return 3;
            if (x >= (long long)1e1) return 2;
            return 1;
        }
    }
    IO() {
        load();
        for (int i = 0; i < 10000; ++i) {
            int j = i;
            for (int t = 3; t >= 0; --t) {
                strs[i * 4 + t] = j % 10 + '0';
                j /= 10;
            }
        }
    }
    ~IO() { flush(); }
    inline void load() {
        memcpy(buf_in, buf_in + pt_in, tail_in - pt_in);
        size_t width = tail_in - pt_in;
        tail_in = width + fread(buf_in + width, 1, buf_size - width, stdin);
        pt_in = 0;
    }
    inline void flush() {
        fwrite(buf_out, 1, pt_out, stdout);
        pt_out = 0;
    }
    inline void read(char& c) { c = buf_in[pt_in++]; }
    template <class T>
    inline void read(T& x) {
        if (pt_in + 32 > tail_in) load();
        char c;
        do {
            read(c);
        } while (c < '0');
        bool minus = 0;
        if (c == '-') {
            minus = 1;
            read(c);
        }
        x = 0;
        while (c >= '0') {
            x = x * 10 + (c & 15);
            read(c);
        }
        if (minus) x = -x;
    }
    inline void write(char c) { buf_out[pt_out++] = c; }
    template <class T>
    inline void write(T x) {
        if (pt_out > buf_size - 32) flush();
        if (x < 0) {
            write('-');
            x = -x;
        }
        size_t digits = num_digits(x);
        int i;
        for (i = pt_out + digits - 4; i > (int)pt_out; i -= 4) {
            memcpy(buf_out + i, strs + (x % 10000) * 4, 4);
            x /= 10000;
        }
    
    memcpy(buf_out + pt_out, strs + x * 4 + (pt_out - i), 4 + i - pt_out);
    pt_out += digits;
    }
    inline void write(const char* s) {
        if (pt_out > buf_size - 32) flush();
        for (int i = 0; s[i] != 0; ++i) write(s[i]);
    }
    template <class T>
    inline void writeln(T x) {
        write(x);
        write('\n');
    }
} io;


void solve() {
    int n; cin >> n; int a[n];
    for (int i=0; i<n; ++i) {
        cin >> a[i];
    }
    int f[n];
    for (int i=0; i<n; ++i) {
        f[i] = 
    }
    cout << max
}


int32_t main() {
#ifdef LOCAL_DEBUG
    freopen("C:/GitHub/Competitive-Programming/Codeforces/I.inp", "r", stdin);
    freopen("C:/GitHub/Competitive-Programming/Codeforces/O.out", "w", stdout);
#endif
    FAST solve();
    return 0;
}