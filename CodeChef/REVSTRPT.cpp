#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    deque<char> ans;
    while (n--) {
        for (int i = 1; i <= n; i++) {
            ans.push_front('*');
            string(n - 1, ' ');
        }
        for (deque<int>::iterator it = ans.begin(); it != ans.end(); ++it)
            cout << *it;
        cout << '\n';
    }
    return 0;
}