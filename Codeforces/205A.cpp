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

int32_t main() {
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    int mntime(1000000001), cities, pos = 1, c = 1;
    for (int i = 1; i <= n; i++) {
        cin >> cities;
        if (cities < mntime) {
            mntime = cities;
            pos = i;
            c = 1;
        }
        else if (cities == mntime)
            ++c;
    }
    if (c == 1)
        cout << pos;
    else
        cout << "Still Rozdil";
        return 0;
}