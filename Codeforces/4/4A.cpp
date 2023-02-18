#include<iostream>
using namespace std;

int main() {
    int w;
    scanf("%d", &w);
    if (w % 2 == 0 && w > 2) {
        printf("%s", "YES");
    }
    else {
        printf("%s", "NO");
    }
    return 0;
}