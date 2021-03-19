///Array Sum
#include <iostream>
using namespace std;

int a[10000][10000];
int main() {
    int m, n;
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    int sum = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            sum += a[i][j];
        }
    }
    cout << sum;
    return 0;
}