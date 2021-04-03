#include <iostream>
using namespace std;

int main() {
    int gr1 = 1, gr2 = 2, gr3 = 3;
    string wl, W; 
    int count = 0;
    for (int i = 1; i <= 6; i++) {
        cin >> wl;
        if (wl == "W") {
            count++;
        }
    }
    if (count == 5 || count == 6) {
        cout << gr1;
    }
    if (count == 3 || count == 4) {
        cout << gr2;
    }
    if (count == 1 || count == 2) {
        cout << gr3;
    }
    if (count == 0) {
        cout << -1;
    }
    return 0;
}