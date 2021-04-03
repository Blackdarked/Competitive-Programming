#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void MoveDisk(int n, int x, int y) {
    if (n == 1)
        cout << x << " -> " << y << endl;
    else {
        MoveDisk(n - 1, x, 6 - x - y);
        MoveDisk(1, x, y);
        MoveDisk(n - 1, 6 - x - y, y);
    }
}

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    MoveDisk(n, 1, 2);
    return 0;
}