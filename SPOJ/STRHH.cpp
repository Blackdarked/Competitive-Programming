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

    int n, l;
    cin >> n;
    string a;
    for (int i = 0; i < n; i++) {
        cin >> a;
        l = a.length() / 2;
        for (int j = 0; j < l; j+=2) {
            cout << a[j];
        }
        cout << "\n";
    }
    return 0;
}