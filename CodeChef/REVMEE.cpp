#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);

    int n, t;
    cin >> n;
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        cin >> t;
        ans.push_back(t);
    }
    reverse(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << ' ';
    }
    return 0;
}