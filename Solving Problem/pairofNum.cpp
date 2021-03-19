#include<bits/stdc++.h>
#include<cmath>
using namespace std;
typedef long long ll;

int counterPoN(int l, int r, int k) {
    cin >> l >> r >> k;
    ll x, y;
    int count = 0;
    cin >> x >> y;
    for (int i = 0; i > 0;)
    {
        if (((l <= x * x) && (x * x <= r)) && ((l <= y * y * y) && (y * y * y <= r)) && (abs(x * x - y * y * y) <= k)) {
            count++;
            return count;
        }
        else {
            return -1;
        }
    }
}