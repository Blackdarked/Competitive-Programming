#include<bits/stdc++.h>
#include<cstdlib>
#include<sstream>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
typedef long long ll;
const int MxN = 100000;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int T;
    cin >> T;
    ll A[MxN], B[MxN];
    for (int i = 0; i <= T; ++i) {
        cin >> A[i] >> B[i];
    }

    for (int i = 0; i <= T; ++i) {
        cout << A[i] + B[i] << endl;
    }
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    return 0;
}