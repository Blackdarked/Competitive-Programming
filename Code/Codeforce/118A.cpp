#include<bits/stdc++.h>
using namespace std;
#define MP make_pair
#define F first
#define S second
#define vector <int> vi;
#define pair <int, int>pi;
#define PB push_back
typedef long long ll;
typedef unsigned long long ull;


int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	
    string s;
	getline(cin, s);

	string ans;
	for (int i = 0; i < s.size();i++)
	{
		char c = tolower(s[i]);
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y') {
			continue;
		}
		else {
			cout << "." << c;
		}
	}
	cout << ans << endl;
	return 0;
}