#include<bits/stdc++.h>
using namespace std;

#define FAST cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);

const int P = 1e4;

class HashTable {
public:
    int m, n;
    float LOAD;
    vector<pair<int, int>> v[P];

    void insert(int key, int val) {
        if (n + 1 > m * LOAD) return;

        int h = getHash(key);
        for (auto [k, v] : v[h]) {
            if (k == key) return;
        }
        v[h].push_back({ key, val });
    }

    void find(int key) {
        int h = getHash(key);
        for (auto [k, vl] : v[h]) {
            if (k == key) {
                cout << vl << '\n';
                return;
            }
        }
        cout << "KHONG" << '\n';
    }

private:
    int getHash(int key) { return key % m; }
};

void solve() {
    HashTable t; cin >> t.m >> t.LOAD >> t.n;
    for (int i = 0; i < t.m; i++) {
        pair<int, int> p; cin >> p.first;
        t.v[i].push_back(p);
    }
}

int main() {
    FAST solve();
    return 0;
}