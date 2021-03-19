#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
int main() {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    ull m, n, k, s = 0ull;
    cin >> n;
    k = n;
    while (--n) {
        cin >> m;
        s += m;
        k += n;
    }

    cout << k - s << endl;
    return 0;
}