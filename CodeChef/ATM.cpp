#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<char> vc;
typedef vector<bool> vb;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef vector<vi> vvi;
typedef vector<vb> vvb;
typedef queue<int> qi;
typedef stack<int> si;
typedef deque<int> di;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int a;
    float b, c;
    cin >> a >> b;
    c = b - a - 0.50;
    if (a % 5 == 0 && a + (0.50) <= b) {
        cout << c;
    }
    else {
        cout << b;
    };
    return 0;
}