#include<bits/stdc++.h>
using namespace std;

int SD(int x) {
    int s(0), i;
    for (int i = 1; i * i < x; i++) {
        if (x % i == 0) {
            s += i + x / i;
        }
    }
    if (i * i == x) {
        s += i;
    }
    return s - x;
}

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);

    int a, b;
    cin >> a >> b;
    if (SD(a) == b || SD(b) == a)
        cout << "They are friends" << endl;
    else
        cout << "They are not friends" << endl;
    return 0;
}