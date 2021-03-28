#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

    int n, cU(0), cR(0), cAns(0);
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'U')
            cU++;
        else if (s[i] == 'R')
            cR++;
    
        if (cU == cR && cU != 0 && cR != 0) {
            if (s[i] == 'R' && s[i+1] == 'R')
                cAns++;
            else if (s[i] == 'U' && s[i+1] == 'U')
                cAns++;
        }
    }
    cout << cAns << endl;
    return 0;
}