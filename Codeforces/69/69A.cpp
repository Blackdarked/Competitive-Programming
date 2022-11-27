#include<bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	
	int n;
	cin >> n;
	
	int x, y, z, xsum(0), ysum(0), zsum(0);
	while (n--) {
		cin >> x >> y >> z;
		xsum += x;
		ysum += y;
		zsum += z;
	}
	if (xsum == 0 && ysum == 0 && zsum == 0) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}
