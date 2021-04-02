#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;


int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

    string a, b;
    cin >> a >> b;
    reverse(b.begin(), b.end());
    if (a == b)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}