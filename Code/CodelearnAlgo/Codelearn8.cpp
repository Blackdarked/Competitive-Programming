///Sorted array
#include <iostream>
using namespace std;

int a[1000001];
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    bool checkInc = true;
    bool checkDec = true;
    for (int i = 0; i < n; i++) {
        if (a[i] <= a[i - 1])
            checkInc = false;
        if (a[i] >= a[i - 1])
            checkDec = false;
    }
    if (checkInc || checkDec)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}