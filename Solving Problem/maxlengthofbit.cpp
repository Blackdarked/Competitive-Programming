#include <bits/stdc++.h>
using namespace std;

int maxLengthOfBits(vector<int> nums) {
    map<int, int> mp;
    int ans = 0, s = 0;
    mp[s] = 0;
    int i = 1;
    for (int a : nums) {
        if (a) {
            ++s;
        }
        else {
            --s;
        }
        if (mp.find(s) != mp.end()) {
            ans = max(ans, i - mp[s]);
        }
        else {
            mp[s] = i;
        }
        ++i;
    }
    return ans;
}    