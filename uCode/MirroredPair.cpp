#include<bits/stdc++.h>
using namespace std;

int main() {
    char A, B;
    cin >> A >> B;
    if ((A == 'b' && B == 'd') || (A == 'd' && B == 'b') || (A == 'p' && B == 'q') ||(A == 'q' && B == 'p')) {
        cout << "mirrored";
    }
    else {
        cout << "ordinary";
    }
    return 0;
}