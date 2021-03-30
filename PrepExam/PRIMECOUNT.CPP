#include<bits/stdc++.h>
using namespace std;
typedef unsigned int uint;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

bool isPrime(ll n) {
    if (n < 2)
        return false;
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

void count(ll L, ll R) {
    ll count = 0;
    for (int i = L; i <= R - 1; i++) {
        if (isPrime(i))
            count++;
    }
    cout << count << endl;
}

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	freopen("PRIMECOUNT.INP", "r", stdin);
	freopen("PRIMECOUNT.OUT", "w", stdout);

    ll low(0), high(0), TC;
    cin >> TC;
    for (int i = 0; i < TC; i++) {
        cin >> low >> high;
        count(low, high);
    }
    return 0;
}