#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

    string a, b;
    cin >> a >> b;
    string s;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == b[i]) {
            s += '0';
        }
        else {
            s += '1';
        }
    }
    cout << s << endl;
    return 0;
}