#include<bits/stdc++.h>
using namespace std;
#define MP make_pair
#define F first
#define S second
#define vector <int> vi
#define pair <int, int>pi
#define PB push_back
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

int GCD(int a, int b) {
    int d = 0;
    while (b != 0) {
        d = a % b;
        a = b;
        b = d;
    }
    return d;
}

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

    int a, b, d;
    scanf("%d%d", &a, &b);
    d = GCD(a, b);
    cout << a / d << " / " << b / d;
    return 0;
}