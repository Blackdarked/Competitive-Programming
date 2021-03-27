#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int drinks = k * l;
    int toasts = drinks / nl;
    int limes = c * d;
    int salt = p / np;
    cout << min(toasts, min(limes, salt)) / n << endl;
    return 0;
}