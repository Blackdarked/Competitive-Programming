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
const long long N = 1e5;
int a[N];

int32_t main() {
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);

    string s;
    cin >> s;

    size_t flag = 1;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B') {
            i += 2;
            if (!flag)
                cout << ' ';
            continue;
        }
        else {
            flag = 0;
            cout << s[i];
        }
    }
    return 0;
}