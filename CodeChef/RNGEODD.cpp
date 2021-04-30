#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);

    int l, r;
    cin >> l >> r;
    vector<int> ans;
    for (int i = l; i <= r; i++) {
        if (i & 1)
            ans.push_back(i);
    }
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << ' ';
    }
        return 0;
}