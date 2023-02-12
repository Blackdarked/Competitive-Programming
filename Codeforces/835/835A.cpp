#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

    int s, v1, v2, t1, t2;
    cin >> s >> v1 >> v2 >> t1 >> t2;
    int first = s * v1 + t1 + t1;
    int second = s * v2 + t2 + t2;
    if (first < second)
        cout << "First" << endl;
    else if (first > second)
        cout << "Second" << endl;
    else
        cout << "Friendship" << endl;
    return 0;
}