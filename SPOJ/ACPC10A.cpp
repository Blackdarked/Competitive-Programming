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
	cout.tie(0);
	ios_base::sync_with_stdio(0);

    int a, b, c;
    while(true) {
        cin >> a >> b >> c;
        if (!a && !b && !c)
            break;
        if (b - a == c - b) {
            cout << "AP " << 2 * c - b << "\n";
        }
        else {
            cout << "GP " << c * (c / b) << "\n";
        }
    }
    return 0;
}