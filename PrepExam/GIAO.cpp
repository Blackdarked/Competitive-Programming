#include<bits/stdc++.h>
using namespace std;
typedef unsigned int uint;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;


int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	freopen("GIAO.INP", "r", stdin);
	freopen("GIAO.OUT", "w", stdout);

  	int TC, left, right, element(0);
  	cin >> TC;
	int ans[TC];
	while (TC--) {
		cin >> left >> right;
		element = right - left - 1;
		cin >> ans[element];
	}
	sort(ans, ans + TC);
	cout << ans[0] << endl;
	return 0;
}