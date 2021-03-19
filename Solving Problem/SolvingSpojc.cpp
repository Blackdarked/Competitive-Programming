#include <stdio.h>

int main() {
    int n;
    while (true)
    {
        scanf("%d", &n);
        printf("%d", n);
        fflush(stdout);
        if (n == 42)
        {
            break;
        }
        
    }

    return 0;
}