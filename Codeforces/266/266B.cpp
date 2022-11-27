#include<bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	
	int n, t;
	string s;
	cin >> n >> t >> s;
	while (t--) {
		for (int i = 1; i < n;++i) {
			if (s[i] == 'G' && s[i-1] == 'B') {
				s[i] = 'B';
				s[i - 1] = 'G';
				++i;
			}
		}
	}
	cout << s;
	return 0;
}
