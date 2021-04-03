#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

inline void Maximize(int &t, int v) {
    if (v > t)
        t = v;
}

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);

    int n, a, m(0);
    cin >> n;
    for (; n > 0; n--) {
        cin >> a;
        Maximize(m, a);
    }
    cout << m;
    return 0;
}