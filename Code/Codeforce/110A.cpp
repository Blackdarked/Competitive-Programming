#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

    ull n;
    cin >> n;

    int digit(0), c(0);
    while (n > 0) {
        digit = n % 10;
        if (digit == 4 || digit == 7) {
            c++;
        }
        n /= 10;
    }
    if (c == 4 || c == 7) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}