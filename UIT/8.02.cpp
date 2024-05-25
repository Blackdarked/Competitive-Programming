#include <bits/stdc++.h>
using namespace std;
#define MAX 300

void ChenChuoiTaiVitriK(char s[], char s1[], int k);
void Chuanhoa(char s[]);
int myStrlen(char s[], int k);
bool myStrcat(char s[], char s1[], char s2[]);
void myStrcpy(char s[], int vt, char s1[], int k);
int myStrstr(char s[], char s1[]);

void myStrcpy(char s[], int vt, char s1[], int k) {
    for (int i = 0; i < MAX; i++) {
        s[i] = s1[i];
    }
}

void Chuanhoa(char s[]) {
    char c[MAX];
    int i = 0, j = 0;

    while (i < MAX) {
        if (s[i] == '.') {
            while (j > 0 and c[j - 1] == ' ') j--;
            c[j] = s[i];
            ++j;
            c[j] = ' ';
            ++j;
            ++i;
            while (s[i] == ' ') ++i;
        }
        else {
            c[j] = s[i];
            ++j;
            ++i;
        }
    }
    for (int i = 0; i < MAX; i++) s[i] = c[i];
}


int main() {
#ifdef LOCAL_DEBUG
    freopen("C:/Users/Admin/Competitive-Programming/UIT/I.inp", "r", stdin);
    freopen("C:/Users/Admin/Competitive-Programming/UIT/O.out", "w", stdout);
#endif
    char s[MAX];

    fflush(stdin);
    cin.getline(s, MAX);

    char s1[MAX];
    myStrcpy(s1, 0, s, 0);
    Chuanhoa(s1);
    cout << s << endl << s1 << endl;
    return 0;
}

