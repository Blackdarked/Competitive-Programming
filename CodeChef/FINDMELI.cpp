#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
    cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);

    int n, k;
    cin >> n >> k;
    vector<int> ans(n + 1, 0);
    for (int i = 0; i < n; i++) {
        cin >> ans[i];
    }
    for (int i = 0; i <= ans.size(); i++) {
        if (ans[i] == k) {
            cout << 1;
            break;
        }
        else if (i == ans.size()) {
            cout << -1;
            break;
        }
    }
    return 0;
}