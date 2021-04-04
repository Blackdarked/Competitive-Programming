#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<char> vc;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

bool check(int x) {
    if (x < 2)
        return false;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0)
            return false;
    }
    return true;
}

void isPrime(int x, int y) {
    for (int i = x; i <= y; i++) 
        if (check(i))
            cout << i << "\n";
    cout << "\n";
}

int main()
{
    cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);

    int TC, m, n;
    cin >> TC;
    while (TC--) {
        cin >> m >> n;
        isPrime(m, n);
    }
    return 0;
}