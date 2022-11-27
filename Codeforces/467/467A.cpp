#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

    int n, p, q, c(0);
    cin >> n;
    while (n--) {
        cin >> p >> q;
        if (p + 2 <= q)
            c++;
    }
    cout << c << endl;
    return 0;
}