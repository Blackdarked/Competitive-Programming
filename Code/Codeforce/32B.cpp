#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	
	string s;
	cin >> s;

	size_t index = 0;
	while (index < s.size()) {
		if (s[index] == '.')
			printf("%s", "0");
		else if (s[index] == '-' && s[index+1] == '.') {
			printf("%s", "1");
			++index;
		}
		else if (s[index] == '-' && s[index+1] == '-') {
			printf("%s", "2");
			++index;
		}
		++index;
	}
	return 0;
}
