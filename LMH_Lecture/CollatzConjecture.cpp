#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void Print(int x) {
    if (x == 1)
        cout << 1;
    else {
        if (x % 2 == 0) {
            Print(x / 2);
            cout << " * 2";
        }
        else {
            Print(x * 3 + 1);
            cout << " / 3";
        }
    }
}

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    cout << n << " = ";
    Print(n);
    return 0;
}