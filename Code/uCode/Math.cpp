#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll a, c;
    char b;
    cin >> a >> b >> c;
    ll total = 0;
    if (b == '$') {
        total = (a * a) - (c * c);
        cout << total;
    }
    if (b == '@') {
        total = (a * c) + (2 * a - 3);
        cout << total;
    }
    if (b == '#') {
        total = a * c * (c - 14);
        cout << total;
    }
    return 0;
}