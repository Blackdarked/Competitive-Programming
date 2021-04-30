#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);

    int a, b, c;
    cin >> a >> b >> c;
    if (a + b >= c && a + c >= b && b + c >= a)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}