#include<bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;
#define FOR(n) for(int i=0; i<n; ++i)
#define RNDRNG(a, b) a + rand() % b
char c;
int n, l, r, x = 0, y = 0;


int main() {
    int n; 
    srand(time(0));
    
    cin >> n;
    FOR(n) {
        int x = RNDRNG(1000, 8999), y = RNDRNG(1000, 8999);
        cout << ((x < y) ? y : x) << " - " << ((x < y) ? x : y) << '\n';
    }

    cin >> n;
    set<pii> sp;
    FOR(n) {
        int x = RNDRNG(2,9), y = RNDRNG(2,9);
        pii c = make_pair(x, y);
        if (sp.count(c) == 0) {
            sp.insert(c);
            cout << x << " * " << y << '\n';
        }
        else continue;
    }

    sp.clear();
    cin >> n;
    while(n--) {
        int x = RNDRNG(2,4), y = x * (RNDRNG(2,9));
        pii c = make_pair(x, y);
        if (sp.count(c) == 0) {
            sp.insert(c);
            cout << y << " / " << x << '\n';
        }
        else ++n;
    }
    sp.clear();
    return 0;
}