#include<bits/stdc++.h>
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define IOF()                         \
    freopen("Input.txt", "r", stdin); \
    freopen("Output.txt", "w", stdout);
using namespace std;

int x, n;

void search(int y) {
    if (y == n) {
        count++;
        return;
    }
    for (int i = 0; x < n; ++x) {
        if (col[x] || diag1[x+y] || diag2[x-y+n-1])
            continue;
        col[x] = diag1[x + y] = diag2[x - y + n - 1] = 1;
        search(y + 1);
        col[x] = diag[x + y] = diag2[x - y + n - 1] = 0;
    }
}

int main() {
    //Optimization
    fast_cin();

    cout << "Enter the number of queen(s): ";
    cin >> n;
    search(n);

    cout << n << endl;
    
    //IOF
    IOF();
}