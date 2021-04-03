#include<bits/stdc++.h>
using namespace std;

int pressed[4][4];
int toggled[4][4];

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);


    for (int x = 1; x <= 3;x++) {
        for (int y = 1; y <= 3;y++) {
            cin >> pressed[x][y];
            toggled[x][y] = pressed[x][y];
        }
    }

    for (int x = 1; x <= 3;x++) {
        for (int y = 1; y <= 3;y++) {
            if (pressed[x][y] != 0) {
                toggled[x + 1][y] += pressed[x][y];
                toggled[x - 1][y] += pressed[x][y];
                toggled[x][y + 1] += pressed[x][y];
                toggled[x][y - 1] += pressed[x][y];
            }
        }
    }
    for (int x = 1; x <= 3;x++) {
        for (int y = 1; y <= 3;y++) {
            if (toggled[x][y] % 2) 
                cout << "0";
            else
                cout << "1";
        }
        cout << "\n";
    }
    return 0;
}