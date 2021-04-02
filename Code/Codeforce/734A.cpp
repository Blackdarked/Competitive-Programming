#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

    int n, countA(0), countD(0);
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'A')
            countA++;
        else if (s[i] == 'D') {
            countD++;
        }
    }
    if (countA > countD)
        cout << "Anton" << endl;
    else if (countA < countD)
        cout << "Danik" << endl;
    else
        cout << "Friendship" << endl;
        return 0;
}