#include <bits/stdc++.h>
using namespace std;

int32_t BS(vector<int> &a, int l, int r, int x) {
    if (r >= l) {
        int m = l + (r - l) / 2;
        if (a[m] == x)
            return m;
        if (a[m] > x)
            return BS(a, l, m - 1, x);
        return BS(a, m + 1, r, x);
    }
    return -1;
}

int32_t main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> v(n, 0);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    
}