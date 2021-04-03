#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    string s;
    cin >> s;

    int arr[1000], count(0);
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '+') {
            continue;
        }
        else {
            arr[count++] = s[i] - '0';
        }
    }
    sort(arr, arr + count);
    for (int i = 0; i < count; i++) {
        cout << arr[i];
        if (i == count - 1) {
            break;
        }
        cout << "+";
    }
    return 0;
}