#include<bits/stdc++.h>
#include<iostream>
#include<sstream>
#include<algorithm>
#include<iomanip>
#include<bitset>

using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

typedef unsigned int uint;
typedef unsigned long long ull;
typedef long long ll;

using namespace std;

int main() {
    _;
    int x;
    for (int i = 1; i <= 5; ++i) {
        for (int j = 1; j <= 5; ++j) {
            cin >> x;
            if (x==1)
                cout << abs(i-3) + abs(j-3) << endl;
        }
    }
    return 0;
}