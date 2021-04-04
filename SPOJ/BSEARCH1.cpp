#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<char> vc;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

int binarySearch(int *arr, int l, int r, int k) {
	if (l > r) {
		return -1;
	}
	int m = l + (r - l) / 2;
	if (arr[m] == k) {
		if (m == 0 || arr[m - 1] != k)
			return m;
		return binarySearch(arr, l, m - 1, k);
	}
	if (arr[m] > k) {
		return binarySearch(arr, l, m - 1, k);
	}
	return binarySearch(arr, m + 1, r, k);
} 

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);

	int n, q, k;
	cin >> n >> q;
	int arr[100000];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < q; i++) {
		cin >> k;
		cout << binarySearch(arr, 0, n - 1, k) << "\n";
	}
	return 0;
}