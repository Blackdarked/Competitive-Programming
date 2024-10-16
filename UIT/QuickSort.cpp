#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>&v, int s, int e) {
    int p = v[e], i = s - 1;
    for (int j = s; j <= e - 1; j++) {
        if (v[j] < p) {
            i++;
            swap(v[i], v[j]);
        }
    }
    swap(v[i + 1], v[e]);
    return i + 1;
}

void QuickSort(vector<int>&v, int s, int e) {
    if (s < e) {
        int pv = partition(v, s, e);
        QuickSort(v, s, pv - 1);
        QuickSort(v, pv + 1, e);
    }
}

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for (auto& i : v) cin >> i;
    QuickSort(v, 0, n - 1);
    for (auto& i : v) cout << i << ' ';
}


int main() {
    solve();
    return 0;
}