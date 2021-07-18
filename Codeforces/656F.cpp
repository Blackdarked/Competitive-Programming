#include<bits/stdc++.h>
using namespace std;

main() {
    cin.tie(nullptr); cout.tie(nullptr); ios::sync_with_stdio(false);
    string s; cin >> s;
    int ans = 0;
    for (int i=1; i<s.length(); ++i) {
        ans += s[i] - '0';
    }
    cout << (ans > 21 ? ans + 1 : ans > 10 ? ans + 10 : ans + 19) << '\n';
}