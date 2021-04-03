#include<bits/stdc++.h>
using namespace std;

int GCD(int x, int y) {
    int r;
    while (y != 0) {
        r = x % y;
        x = y;
        y = r;
    }
    return x;
}

int main()
{
    cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);

    int a, b, d;
    cin >> a >> b;
    d = GCD(a, b);
    cout << a / d << " / " << b / d;
    return 0;
}