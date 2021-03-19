#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

bool checkPrime(int a) {
    if (a == 2)
        return false;
    for (int i = 2; i < a; i++) {
        if (a % i == 0)
            return false;
    }
    return true;
}

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

    int m, n;
    cin >> m >> n;
    int next = m + 1;
    while (!checkPrime(next)) {
        next++;
    }
    cout << (next == n ? "YES" : "NO") << endl;
    return 0;
}