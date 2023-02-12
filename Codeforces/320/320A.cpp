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
    if (s[0] != '1') {
        cout << "NO";
        return 0;
    }
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == '1')
            continue;
        else if (s[i] == '4') {
            if (s[i-1] == '1') {
                continue;
            }
            else if (s[i-1] == '4') {
                if (s[i-2] == '1') {
                    continue;
                }
                else {
                    cout << "NO";
                    return 0;
                }
            }
            else {
                cout << "NO";
                return 0;
            }
        }
        else if (s[i] != 1 || s[i] != 4) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}