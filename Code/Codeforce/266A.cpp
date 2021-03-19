#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

    int n, c(0);
    cin >> n;
    string s;
    cin >> s;
    while (n--) {
        if (s[n] == s[n-1]) {
            c++;
        }
    }
    cout << c << endl;
    return 0;
}