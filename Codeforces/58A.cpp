#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

    string s; cin >> s;
    string ans = "hello";
    int j(0), pas(0);
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ans[j]) {
            j++;
            pas++;
        }
        if (pas == 5) {
            break;
        }
    }
    if (pas == 5) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
        return 0;
}