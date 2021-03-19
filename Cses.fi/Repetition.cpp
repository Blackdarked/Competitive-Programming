#include<bits/stdc++.h>
using namespace std;
typedef unsigned int uint;
typedef long long ll;
typedef unsigned long long ull;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

    string str;
    cin >> str;
    int count(0), ans(0);
    char l = 'A';
    for (char d : str) {
        if (d == l) {
            ++count;
            ans = max(ans, count);
        }
        else {
            count = 1;
            l = d;
        }
    }
    cout << ans;
    return 0;
}