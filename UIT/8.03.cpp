
#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

int myStrlen(char s[], int k); //Ham tra ve chieu dai chuoi s ke tu vi tri k
void myMemmove(char s[], int vt, int k); //Xoa k ky tu trong chuoi s, bat dau tu vi tri vt. 
int myStrstr(char s[], char s1[]); //Tim chuoi s1 trong chuoi s, neu tim thay tra ve vi tri s1[0] trong chuoi s, khong tin thay tra ve -1
void Chuanhoa(char s[]);

void Chuanhoa(char s[]) {
    char a[MAX];
    int i = 0, j = 0;
    bool f = 0;

    while (i < MAX) {
        if (s[i] == ' ') {
            if (s[i + 1] == ' ') {
                while (i > 0 and s[i] != ' ') {
                    i++;
                }
            }
            else {
                f = 1;
            }
        }
        if (s[i] != ' ' and f) {
            s[i] -= 32 * (s[i] >= 97);
            f = 0;
        }
    }
    for (int i = 0; i < MAX; i++) s[i] = a[i];
}

int main()
{
	char s[MAX];
//	gets(s);	//Nhap chuoi s	    
    cin.getline(s,MAX);
	Chuanhoa(s);
	cout << s << endl;
	return 0;
}

