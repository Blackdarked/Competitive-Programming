#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<char> vc;
typedef vector<bool> vb;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef vector<vi> vvi;
typedef vector<vb> vvb;
typedef queue<int> qi;

int32_t main() {
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);

    int ab, bc, ca;
    cin >> ab >> bc >> ca;
    int a = sqrt(ab * bc / ca + 0.5);
    int b = sqrt(bc * ca / ab + 0.5);
    int c = sqrt(ca * ab / bc + 0.5);
    cout << 4 * (a + b + c);

    return 0;
}