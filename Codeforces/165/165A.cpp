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
const long long N = 1e3;
ll a[201][2];

int32_t main() {
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> a[i][j];
        }
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        int l = 0, r = 0, u = 0, d = 0;
        int x = a[i][0], y = a[i][1];
        for (int j = 0; j < n; j++) {
            if (x < a[j][0] && y == a[j][1])
                l++;
            else if (x > a[j][0] && y == a[j][1])
                r++;
            else if (x == a[j][0] && y < a[j][1])
                u++;
            else if (x == a[j][0] && y > a[j][1])
                d++;
        }
        if (l > 0 && r > 0 && u > 0 && d > 0) {
            if (l + r + u + d >= 4) {
                count++;
            }
        }
    }
    cout << count;
    return 0;
}

//Second approach
/*
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

    int n, x[200], y[200], supercentral(0);
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> x[i] >> y[i];
    }

    for (int i = 0; i < n; ++i) {
        int bit = 15;
        for (int j = 0; j < n && bit != 0; ++j) {
            if (x[j] == x[i]) {
                if (y[j] < y[i]) {
                    bit &= (15 - 1);
                }
                if (y[j] > y[i]) {
                    bit &= (15 - 2);
                }
            }
            if (y[j] == y[i]) {
                if (x[j] < x[i]) {
                    bit &= (15 - 4);
                }
                if (x[j] > x[i]) {
                    bit &= (15 - 8);
                }
            }
        }
        if (bit == 0)
            supercentral += 1;
    }
    cout << supercentral << endl;
	return 0;
}
*/