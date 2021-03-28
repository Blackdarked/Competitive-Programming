#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	string a, b, c, s;
	cin >> a >> b >> c;
	s = a + b;

	sort(s.begin(), s.end());
	sort(c.begin(), c.end());
	if (s == c) {
		cout << "YES" << endl;
	}
	else
		cout << "NO" << endl;
	return 0;
}