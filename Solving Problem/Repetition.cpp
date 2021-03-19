#include<bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    string s;
    cin >> s;
    int count1, count2, count3, count4;
    for (int i = 0; i < s.size(); i++) {
        if (s == "A") {
            count1++;
        }
        if (s == "T") {
            count2++;
        }
        if (s == "G") {
            count3++;
        }
        if (s == "C") {
            count4++;
        }
    }
    cout << max(count1, count2, max(count3, count4));
    return 0;
}