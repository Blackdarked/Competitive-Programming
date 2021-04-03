#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool lucky(int n) {
    while (n != 0) {
        if (n % 10 != 4 && n % 10 != 7)
            return false;
        n /= 10;
    }
    return true;
}

bool almostlucky(int n) {
    if (lucky(n))
        return true;
    for (int i = 2; i <= n; i++) {
        if (n % i == 0 && (lucky(i) || lucky(n / i))) {
            return true;
        }
    }
    return false;
}

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);
    int n;
    cin >> n;
    if (almostlucky(n)) 
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}