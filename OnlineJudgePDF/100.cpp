#include <cmath>
#include <cstdio>
#include <algorithm>
#include <iostream>

using namespace std;

#define inpfile(f) freopen(f,"r",stdin)
#define outfile(f) freopen(f,"w",stdout)


int l, r, m;
//find result after n == 1;
int cycle_length(int n) {

    int result = 1;

    while(n != 1) {

        if(n%2 == 0) n /= 2;
        else n = 3*n + 1;

        result += 1;
    }

    return result;

}


int main() {

    int h;

    while((scanf("%d%d\n", &l, &r)) == 2) {
        m = 0;
        for(int i = min(l,r) ; i <= max(l,r); ++i) {
            h = cycle_length(i);
            m = max(m,h);
        }
        printf("%d %d %d\n", l, r, m);
    }

    return 0;
}
