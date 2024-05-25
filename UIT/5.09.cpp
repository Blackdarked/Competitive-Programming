#include <iostream>
using namespace std;
#define MAX 300

int Fibo(int);

int main() {
#ifdef LOCAL_DEBUG
    freopen("C:/Users/Admin/Competitive-Programming/UIT/I.inp", "r", stdin);
    freopen("C:/Users/Admin/Competitive-Programming/UIT/O.out", "w", stdout);
#endif
    int x;
    cin >> x;
    if (x <= 0 or x >= 31) {
        cout << "So " << x << " khong nam trong khoang [1,30].";
    }
    else {
        int a[] = { 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765, 10946, 17711, 28657, 46368, 75025, 121393, 196418, 317811, 514229, 832040 };
        cout << a[x - 1];
    }
}

