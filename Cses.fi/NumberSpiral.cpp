#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

    int TC;
    cin >> TC;
    while (TC--) {
        ll y, x;
        cin >> y >> x;
        ll z = max(y, x), z2 = (z - 1) * (z - 1), ans;
        if (z % 2) {
            if (y == z) {
                ans = z2 + x;
            }
            else {
                ans = z2 + 2 * z - y;
            }
        }
        else {
            if (x == z) {
                ans = z2 + y;
            }
            else {
                ans = z2 + 2 * z - x;
            }
        }
        cout << ans << endl;
    }
    return 0;
}