#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    if (n % 5 != 0 && n % 11 != 0)
        cout << "NONE";
    else if (n % 5 == 0 && n % 11 == 0)
        cout << "BOTH";
    else
        cout << "ONE";
    return 0;
}