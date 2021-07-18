#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef vector<ll> vll;
typedef vector<char> vc;
typedef vector<bool> vb;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vpi;
typedef vector<vi> vvi;
typedef vector<vb> vvb;
typedef queue<int> qi;
typedef deque<int> di;
typedef stack<int> sti;
typedef set<int> si;
#define FOR(i, a, b) for (int i = a; i < b; ++i)
const long long N = 1e5;
int a[N];
ll m, n, t;

int intcmp(const void* a, const void* b) {
	return *(int*)a < *(int*)b ? -1 :
		   *(int*)a > *(int*)b ?  1 :
		   						  0 ;
}

int main(int argc, char** argv) {
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);

	size_t k = (argc > 1) ? atoi(argv[1]) : 0;
    if (argc < k + 2) {
		fprintf(stderr, )
    }
	return 0;
}