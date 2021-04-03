#include<bits/stdc++.h>
using namespace std;

void Write(int x, int y) {
    int m = x, n = y, r;
    while (n != 0) {
        r = m % n;
        m = n;
        n = r;
    }
    cout << x / m << " / " << y / m;
}

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);

    int a, b;
    cin >> a >> b;
    Write(a, b);
    return 0;
}