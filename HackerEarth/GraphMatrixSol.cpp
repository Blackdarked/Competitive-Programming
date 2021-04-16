#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<char> vc;
typedef vector<bool> vb;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef vector<vi> vvi;
typedef queue<int> qi;
typedef stack<int> si;

int matrix[1001][1001];

int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    int i, m, n, q, a, b;
    cin >> n >> m;
    for (i = 1; i <= m; i++)
    {
        cin >> a >> b;
        matrix[a][b] = 1;
        matrix[b][a] = 1;
    }
    cin >> q;
    for (i = 1; i <= q; i++)
    {
        cin >> a >> b;
        if (matrix[a][b] == 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
