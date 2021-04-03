#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

    int n, h;
    cin >> n >> h;
    int a, c(0);
    while (n--) {
        cin >> a;
        if (a <= h)
            c++;
        else if (a > h)
            c += 2;
    }
    cout << c << endl;
    return 0;
}