#include <bits/stdc++.h>

int data[102];

int main() {
    int N, sum(0);
    scanf("%d", &N);
    assert(N >= 1 && N <= 100);
    for (int i = 0; i < N; i++) {
        scanf("%d", &data[i]);
        assert(data[i] >= 1 && data[i] <= 1000);
        sum += data[i];
    }
    if (sum == 2 * (N-1))
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}
//Note: Because of ambigous error, I cannot use std namespace, scanf & printf instead.