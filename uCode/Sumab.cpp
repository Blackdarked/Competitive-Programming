#include<bits/stdc++.h>
using namespace std;

int intSum(int a, int b) {
    int sum = 0;
    cin >> a >> b;
    for (int i = 0; i < b; i++) {
        if (i > a && i <= b) {
            sum += i;
        }
    }
    return sum;
}

int main()
{
    int a, b, sum;
    intSum(a, b);
    cout << sum;
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    return 0;
}