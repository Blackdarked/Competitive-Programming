#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void convert(ll x) {
    if (x > 1)
        convert(x / 2);
    cout << x % 2;
}

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);

    ll n;
    cin >> n;
    convert(n);
    return 0;
}