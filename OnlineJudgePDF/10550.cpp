#include<bits/stdc++.h>
using namespace std;
typedef unsigned int uint;
typedef long long ll;
typedef unsigned long long ull;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);

    int start, first, second, third;
    
    scanf("%d %d %d %d", &start, &first, &second, &third);
    
        while (start || first || second || third) {
            printf("%d\n", 1080 + ((start - first + 40) % 40 + (second - first + 40) % 40 + (second - third + 40) % 40) * 9);
        
            scanf("%d %d %d %d", &start, &first, &second, &third);
        }
    return 0;
}