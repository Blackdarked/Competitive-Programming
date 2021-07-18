#include<bits/stdc++.h>
using namespace std;

char c;
int n, l, r, x = 0, y = 0;


int main() {
    int n; cin >> n;
    srand(time(0));
    for (int i=1; i<=n; ++i) {
        cout << 1000 + rand() % 10000 << " + " << 1000 + rand() % 10000 << '\n';
    }
    return 0;
}