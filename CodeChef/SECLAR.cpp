#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    int a, b, c;
    cin >> a >> b >> c;
    int mx = max({a, b, c});
    int mn = min({a, b, c});
    if (a != mx && a != mn)
        cout << a;
    else if (b != mx && b != mn)
        cout << b;
    else
        cout << c;
    return 0;
}