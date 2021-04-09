#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<char> vc;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef vector<pi> vii;
#define F first;
#define S second;
#define PB push_back;
#define MP make_pair;
#define REP(i, a, b) for (int i = a; i <= b; i++)

void Try(int n) {
	int A[100000];
	for (int i = 0; i <= 1; i++) {
		A[i] = n;
		if (i == n) 
			for (int j = 0; j < n; j++) 
				cout << A[i];
		else {
			Try(i++);
		}
	}
}

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);


	return 0;
}