#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<char> vc;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;


int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);

    int n, arr[100000];
    cin >> n;
    int group(0);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        if(arr[i] == arr[i+1]) {
            continue;
        }
        else {
            group++;
            continue;
        }
    }
    if (group == 0) {
        group = 1;
    }
    cout << group << endl;
    return 0;
}