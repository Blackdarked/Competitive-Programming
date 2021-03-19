#include<bits/stdc++.h>
using namespace std;
typedef unsigned int uint;
typedef long long ll;
typedef unsigned long long ull;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

    int n, p;
    cin >> n >> p;
    int amazing(0), min(p), max(p);

    while (--n) {
        cin >> p;
        if (p < min) {
            min = p;
            ++amazing;
        }
        else if (p > max) {
            max = p;
            ++amazing;
        }
    }
    cout << amazing << endl;
    return 0;
}