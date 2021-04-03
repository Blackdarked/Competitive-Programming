#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll F(int x) {
    if (x == 0)
        return 1;
    else
        return x * F(x - 1);
}

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    cout << F(n) << endl;
    return 0;
}