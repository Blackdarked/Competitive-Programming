#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<char> vc;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;


int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

    int n, m, count[5]={0};
    cin >> n;
    while (n--) {
        cin >> m;
        count[m]++;
    }
    int total = count[4] + count[3] + count[2] / 2;
    count[1] -= count[3];
    if (count[2] % 2 == 1) {
        total++;
        count[1] -= 2;
    }
    if (count[1] > 0) {
        total += (count[1] + 3) / 4;
    }
    cout << total << endl;
    return 0;
}