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
typedef vector<pi> vii;
typedef vector<vi> vvi;
typedef vector<vb> vvb;
typedef queue<int> qi;
typedef deque<int> di;
typedef stack<int> sti;
typedef set<int> si;
const long long N = 100;

int32_t main() {
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);

    int n;
    string s;
    cin >> n >> s;
    if (n == 1) {
        cout << s;
        return 0;
    }
    else {
        string t1 = s, t2;
        int tm1 = 1, tm2 = 0;
        for (int i = 0; i < n - 1; i++) {
            cin >> s;
            if (s != t1) {
                t2 = s;
                tm2++;
            }
            else {
                tm1++;
            }
        }
        tm1 < tm2 ? cout << t2 : cout << t1;
    }
    return 0;
}