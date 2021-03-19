#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	
    int n;
    cin >> n;

    int evenNum = 2, oddNum = 1;
    if (n % 2 != 0)
        cout << -1 << endl;
    else {
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                cout << evenNum << " ";
                evenNum += 2;
            }
            else if (i % 2 != 0) {
                cout << oddNum << " ";
                oddNum += 2;
            }
        }
    }
    return 0;
}