#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    vector<int> ans;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            ans.push_back(i);
        }
    }
    cout << ans.size() << '\n';
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << ' ';
    }
    return 0;
}