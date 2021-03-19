#include<bits/stdc++.h>
using namespace std;
typedef unsigned int uint;
typedef long long ll;
typedef unsigned long long ull;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

    int m, n;
    cin >> m;
    int min(n), max(n);
    while (--m) {
        cin >> n;
        if (n < min) {
            min = n;
        }
        if (n > max) {
            max = n;
        }
    }
    cout << (max-1)+(m-min) << endl;
    return 0;
}