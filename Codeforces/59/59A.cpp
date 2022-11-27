#include<bits/stdc++.h>
using namespace std;
#define elif else if
typedef long long ll;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);

    string s;
    cin >> s;

    //count1 uppercase, count2 lowercase
    int countUp(0), countDown(0);
    for (size_t i = 0; i < s.size(); i++) {
        if (isupper(s[i])) {
            countUp++;
        }
        else {
            countDown++;
        }
    }
    if (countUp > countDown) {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    else {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    cout << s << endl;
    return 0;
}