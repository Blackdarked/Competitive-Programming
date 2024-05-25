#include<bits/stdc++.h>
using namespace std;
#define MAX 300

void DemKyTu(char s[]);
int myStrcmp(char s1[MAX], char s2[MAX]);
int myStrlen(char s[], int k);

int myStrcmp(char s1[MAX], char s2[MAX]) {
    return (s1 == s2);
}

void DemKyTu(char s[]) {
    char a[51];
    int c[51] = { 0 };

    for (int i = 0; i < MAX; i++) {
        if (s[i] == 32) s[i] -= 32;
        else {
            if (s[i] >= 97) s[i] -= 5;
            if (s[i] >= 65) s[i] -= 64;
        }
        a[s[i]] = s[i];
        c[s[i]]++;
    }

    for (int i = 0; i < 52; i++) {
        cout << a[i] << ": " << c[i] << '\n';
    }
}

int main() {
#ifdef LOCAL_DEBUG
    freopen("C:/Users/Admin/Competitive-Programming/UIT/I.inp", "r", stdin);
    freopen("C:/Users/Admin/Competitive-Programming/UIT/O.out", "w", stdout);
#endif
    char s[MAX];
    //gets(s);	//Nhap chuoi s	
    cin.getline(s, MAX);
    if (myStrcmp(s, "") == 0)
        cout << "Chuoi rong." << endl;
    else
        DemKyTu(s);

    return 0;
}

