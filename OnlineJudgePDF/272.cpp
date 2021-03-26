#include<bits/stdc++.h>
using namespace std;
typedef unsigned int uint;
typedef long long ll;
typedef unsigned long long ull;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    string ans[] = {"``", "''"};
    int n(0);

    string l;
    while (cin >> l) {
        for (uint i = 0; i <= l.size(); i++) {
            if (l[i] == '"') {
                l.replace(i, 1, ans[n]);
                n = 1 - n;
            }
        }
        cout << l << endl;
    }
    return 0;
}