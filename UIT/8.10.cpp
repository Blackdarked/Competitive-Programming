
#include <iostream>
#include <string>
using namespace std;
#define MAX 255

int myStrlen(char s[]);
bool myStrcat(char s1[], char s2[]);

int myStrlen(char s[]) {
    int size = 0;
    while (s[size] != '\0') ++size;
    return size;
}

bool myStrcat(char s1[], char s2[]) {
    if (myStrlen(s1) + myStrlen(s2) > 254) return 0;
    return 1;
}

int main() {
#ifdef LOCAL_DEBUG
    freopen("C:/Users/Admin/Competitive-Programming/UIT/I.inp", "r", stdin);
    freopen("C:/Users/Admin/Competitive-Programming/UIT/O.out", "w", stdout);
#endif
    char s1[MAX], s2[MAX];
    //	gets(s1);
    cin.getline(s1, MAX);
    //	gets(s2);
    cin.getline(s2, MAX);
    bool kt = myStrcat(s1, s2);
    // cout << myStrlen(s1) << ' ' << myStrlen(s2) << '\n';
    if (!kt) {
        cout << "Khong noi duoc. Khong du bo nho.";
    }
    else {
        int sz1 = myStrlen(s1), sz2 = myStrlen(s2);
        for (int i = 0; i < sz1; i++) {
            cout << s1[i];
        }
        cout << ' ';
        for (int i = 0; i < sz2; i++) {
            cout << s2[i];
        }
    }
}
