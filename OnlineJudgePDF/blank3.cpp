#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    ll n, m, a;
    cin >> n >> m >> a;

    for (int i = 1; i * a * a < m * n; ++i) {
        if (i * a * a >= m * n) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}