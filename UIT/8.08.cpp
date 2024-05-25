#include <iostream>
#include <string.h>
using namespace std;
#define MAX 255

int myStrlen(char s[], int k);
void myStrcpy(char s[], int vt, char s1[], int k);
void mySubstr(char s[], int b, int count, char ss[]);
bool myStrcat(char s1[], char s2[]);
void ChenChuoiTaiVitriK(char s[], char s1[], int k);

int main() {
#ifdef LOCAL_DEBUG
    freopen("C:/Users/Admin/Competitive-Programming/UIT/I.inp", "r", stdin);
    freopen("C:/Users/Admin/Competitive-Programming/UIT/O.out", "w", stdout);
#endif
    char s[MAX], s1[MAX];
//	gets(s);
    cin.getline(s,MAX);
//	gets(s1);
    cin.getline(s1,MAX);
	int k;
	cin >> k;
	if (k < 0 || k>myStrlen(s, 0))
		cout << "Vi tri " << k << " khong thoa dieu kien." << endl;
	else {
		ChenChuoiTaiVitriK(s, s1, k);
		cout << s << endl;
	}
	return 0;
}

int myStrlen(char s[], int k) {
	int i = 0;
	while (s[i] != '\0') i++;
	return i;
}

void myStrcpy(char s[], int vt, char s1[], int k) {
	for (int i = 0; i < k; i++) {
		s[vt + i] = s1[i];
	}
}

void mySubstr(char s[], int b, int count, char ss[]) {
	for (int i = 0; i < count; i++) {
		ss[i] = s[b + i];
	}
	ss[count] = '\0';
}

bool myStrcat(char s1[], char s2[]) {
	int len1 = myStrlen(s1, 0);
	int len2 = myStrlen(s2, 0);
	if (len1 + len2 > 254) {
		return false;
	}
	myStrcpy(s1, len1, s2, len2);
	s1[len1 + len2] = '\0';
	return true;
}

void ChenChuoiTaiVitriK(char s[], char s1[], int k) {
	char ss[MAX];
	mySubstr(s, k, myStrlen(s, 0) - k, ss);
	myStrcpy(s, k, s1, myStrlen(s1, 0));
	myStrcat(s, ss);
}
