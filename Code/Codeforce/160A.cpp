#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

    int n, elder(0), younger(0);
    cin >> n;
    int coins[n];
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
        younger += coins[i];
    }
    int size = sizeof(coins) / sizeof(coins[0]);
    sort(coins, coins + size, greater<int>());
    
    int count(0);
    for (int i = 0; i < n; i++) {
        elder += coins[i];
        younger -= coins[i];
        count++;
        if (elder > younger) {
            break;
        }
        else {
            continue;
        }
    }
    cout << count << endl;
    return 0;

}