#include<bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;
#define FOR(n) for(int i=0; i<n; ++i)
#define RNDRNG(a, b) a + rand() % b
int n, x = 0, y = 0;


int main() {
    int n; 
    srand(time(0));
    
    cin >> n;
    FOR(n) { //18
        int x = RNDRNG(100, 899), y = RNDRNG(100, 899);
        if (x >= 1000 || y >= 1000) {
            ++n;
            continue;
        } 
        else {
            cout << ((x < y) ? y : x) << " - " << ((x < y) ? x : y) << '\n';
        }
    }

    cin >> n;
    set<pii> sp;
    while(n--) { //10
        int x = RNDRNG(100, 900), y = RNDRNG(2, 9);
        if (x * y <= 8100 || y == 10) {
            pii c = make_pair(x, y);
            if (sp.count(c) == 0) {
                sp.insert(c);
                cout << x << " * " << y << '\n';
            }
        }
        else {
            ++n;
            continue;
        }
    }

    sp.clear();
    cin >> n;
    while(n--) { //10
        int x = RNDRNG(2, 9), y = x * (RNDRNG(50, 100));
        if (y > 1000 || x == 10) {
            ++n;
            continue;
        }
        pii c = make_pair(x, y);
        if (sp.count(c) == 0) {
            sp.insert(c);
            cout << y << " / " << x << '\n';
        }
        else {
            ++n;
            continue;
        }
    }
    sp.clear();
    return 0;
}