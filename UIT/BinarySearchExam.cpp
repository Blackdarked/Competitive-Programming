#include<bits/stdc++.h>
using namespace std;

#define FAST cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);

struct D {
    float x, y, z;

    bool operator==(D d) {
        return (this->x == d.x and this->y == d.y and this->z == d.z);
    }

    bool operator<(D d) {
        return (this->x < d.x or (this->x == x and this->y < d.y) or (this->x == d.x and this->y == d.y and this->z == d.z));
    }

    bool operator>(D d) {
        return (this->x > d.x or (this->x == d.x and this->y > d.y) or (this->x == d.x and this->y == d.y and this->z > d.z));
    }



    friend ostream& operator<<(ostream& os, const D& d) {
        cout << d.x << ' ' << d.y << ' ' << d.z << '\n';
    }
};

void binarySearch(vector<D>& v, int s, int e, D d) {
    static int ans = 0;
    while (s <= e) {
        ++ans;
        int m = (s + e) >> 1;
        if (v[m] == d) {
            cout << ans << '\n';
            return;
        }
        else if (v[m] < d) s = m + 1;
        else e = m - 1;
    }
    cout << "KHONG" << '\n';
}

void solve() {
    int n; cin >> n; vector<D> v(n);
    for (int i = 0; i < n; i++) { cin >> v[i].x >> v[i].y >> v[i].z; }
    int m; cin >> m;
    for (int i = 0; i < m; i++) {
        D t; cin >> t.x >> t.y >> t.z;
        binarySearch(v, 0, n, t);
    }
}

int main() {
    FAST solve();
    return 0;
}