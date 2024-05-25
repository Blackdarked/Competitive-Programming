
#include <iostream>
#include <string.h>
using namespace std;
#define MAX 255

int myStrcmp(char s1[], char s2[]);

int main() {
#ifdef LOCAL_DEBUG
    freopen("C:/Users/Admin/Competitive-Programming/UIT/I.inp", "r", stdin);
    freopen("C:/Users/Admin/Competitive-Programming/UIT/O.out", "w", stdout);
#endif
    char s1[MAX], s2[MAX];
//	gets(s1);
    cin.getline(s1,MAX);
//	gets(s2);
    cin.getline(s2,MAX);
	int kt = myStrcmp(s1, s2);
	cout << kt << endl;
	return 0;
}

int myStrlen(char s[]) {
    int size = 0;
    while (s[size] != '\0') ++size;
    return size;
}

int myStrcmp(char s1[], char s2[]) {
    int s1z = myStrlen(s1), s2z = myStrlen(s2);
    if (s1z < s2z) return -1;
    if (s1z > s2z) return 1;

    for (int i = 0; i < s1z; i++) {
        if (s1[i] - s2[i] < 0) return -1;
        else if (s1[i] - s2[i] > 0) return 1;
    }
    return 0;
}