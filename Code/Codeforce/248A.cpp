#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

    int n, l(0), r(0), left(0), right(0);
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> l >> r;
		left += l;
		right += r;
	}
    left = min(left, n - left);
    right = min(right, n - right);
    cout << left + right << endl;
    return 0;
}