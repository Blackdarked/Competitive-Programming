#include<bits/stdc++.h>
#include<stack>
using namespace std;

string enc_str(long long n) {
    string s = "";
    while (n > 0) {
        s += char(n % 10 + '0');
        n /= 10;
    }
    return s;
}

int main() {
    string s;
    getline(cin, s);
    s += '@';
    stack<char> st;
    string str = "";
    for (int i = 0; i < s.length(); i++) {
        if (st.empty() || st.top() == s[i]) {
            st.push(s[i]);
        }
        else {
            int count = 0;
            str += st.top();
            while (!st.empty()) {
                count++;
                st.pop();
            }
            str += enc_str(count);
            st.push(s[i]);
        }
    }
    cout << str;
    return 0;
}