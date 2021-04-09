#include<bits/stdc++.h>
using namespace std;
#define MP make_pair
#define F first
#define S second
#define vector <int> vi
#define pair <int, int>pi
#define PB push_back
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

//bool Prime
bool PrimeCheck(int n) {
    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

void Prime(int n) {
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            printf("%d %s", n,"This is not a prime number.");
            break;
            return;
        }
    }
    printf("%d %s", n, " is a prime number.");
}

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);

    int n;
    printf("%s", "Enter a number to check: ");
    scanf("%d", &n);
    Prime(n);
    return 0;
}