
#include <iostream>
#include <math.h>
using namespace std;
#define MAX 100

void NhapmangSNT(int a[], int& n);
int SoPhanTuChuaY(int a[], int n, int y);

bool check(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}


void NhapmangSNT(int a[], int& n) {
    for (int i = 2, j = 0; j <= n; ++i) {
        if (check(i)) {
            a[j] = i;
            j++;
        }
    }

}


int SoPhanTuChuaY(int a[], int n, int y) {
    int cnt = 0, r;

    for (int i = 0; i <= sizeof(a); ++i) {
        bool flag = 1;
        while (a[i] > 0 and flag == 1) {
            r = a[i] % 10;
            // cout << "DEBUG r: " << r << '\n';
            if (r == y) {
                ++cnt;
                // cout << "DEBUG cnt: " << r << '\n';
                flag = 0;
                a[i] /= 10;
                break;
            }
            // cout << "DEBUG a[i]: " << a[i] << '\n';
        }
    }
    return cnt;
}


int main() {
#ifdef LOCAL_DEBUG
    freopen("C:/Users/Admin/Competitive-Programming/UIT/I.inp", "r", stdin);
    freopen("C:/Users/Admin/Competitive-Programming/UIT/O.out", "w", stdout);
#endif
    int a[MAX], n, y;
    cin >> y >> n;
    NhapmangSNT(a, n);
    cout << SoPhanTuChuaY(a, n, y) << endl;
    return 0;
}