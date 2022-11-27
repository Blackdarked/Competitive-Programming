#include<bits/stdc++.h>
using namespace std;
#define MP make_pair
#define F first
#define S second
#define PB push_back
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	int n, k, a, b = 0, mas[10000];
	cin >> n >> k;

	for (int i = 1; i <= n; i++) {
		cin >> a;
		mas[i] = a;
	}
	
	for (int j = 1; j <= n; j++) {
		if (mas[j] >= mas[k] && mas[j] > 0) {
			b++;
		}
	}
	cout << b;
	return 0;
}