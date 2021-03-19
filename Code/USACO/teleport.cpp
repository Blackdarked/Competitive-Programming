#include<bits/stdc++.h>
using namespace std;

int main() {
    ifstream fin("teleport.in");
    ofstream fout("teleport.out");

    int a, b, c, d, count(0);
    fin >> a >> b >> c >> d;
    int res = abs(a - b);
    res = min(res, abs(a - c) + abs(d - b));
    res = min(res, abs(a - d) + abs(c - b));
    fout << res;
    fin.close();
    fout.close();
}