#include<bits/stdc++.h>
using namespace std;
typedef unsigned int uint;
typedef long long ll;
typedef unsigned long long ull;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

    int a, b, c, d;
    set<int> s;
    cin >> a >> b >> c >> d;
    s.insert(a);
    s.insert(b);
    s.insert(c);
    s.insert(d);
    cout << 4 - s.size() << endl;
    return 0;
}