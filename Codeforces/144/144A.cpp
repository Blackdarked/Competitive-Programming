#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<char> vc;
typedef vector<bool> vb;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef vector<vi> vvi;
typedef vector<vb> vvb;
typedef queue<int> qi;

template <typename T> 
pair<bool, int> findInVector(const vector<T>&vecOfElements, const T &element) {
    pair<bool, int> res;
    auto it = find(vecOfElements.begin(), vecOfElements.end(), element);
    if (it != vecOfElements.end()) {
        res.first = true;
        res.second = distance(vecOfElements.begin(), it);
    }
    else {
        res.first = false;
        res.second = -1;
    }
    return res;
}

int32_t main() {
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);

    int n, a;
    cin >> n >> a;
    int mina = a, maxa = a, mini = 0, maxi = 0;
    for (int i = 1; i < n; ++i) {
        cin >> a;
        if (a > maxa) {
            maxa = a;
            maxi = i;
        }
        else if (a <= mina) {
            mina = a;
            mini = i;
        }
    }
    cout << maxi + (n - 1 - mini) - (mini < maxi ? 1 : 0) << '\n';
    return 0;
}