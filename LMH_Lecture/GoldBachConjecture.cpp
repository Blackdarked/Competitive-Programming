#include<bits/stdc++.h>
using namespace std;

bool Prime(int x) {
    if (x < 2)
        return false;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0)
            return false;
    }
    return true;
}

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    for (int k = 1; k <= n / 2; k++) {
        if (Prime(n) && Prime(n - k)) {
            cout << k << " + " << n - k << endl;
        }
    }
        return 0;
}