#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll M100, M50, M20, M10, money;
    ll pg100 = 0, pg50 = 0, pg20 = 0, pg10 = 0;
    cout << "Enter the withdrawal amount: ";
    cin >> money;

    if (money % 10000 != 0) {
        cout << "Your money is not valid, please enter again: ";
    }
    if (money % 10000 == 0) {
        for (int i = money; i > 0;) {
            if (i % M100 == 0) {
                i -= 100000;
                pg100++;
            }
            else if (i % M50 == 0) {
                i -= 50000;
                pg50++;
            }
            else if (money % M20 == 0) {
                i -= 20000;
                pg20++;
            }
            else if (money % M10 == 0) {
                i -= 10000;
                pg10++;
            }
        }
        cout << pg100 + pg50 + pg20 + pg10 << endl;
        return 0;
    }
}