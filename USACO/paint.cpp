#include <fstream>
#include <vector>
using namespace std;

int main() {
	ifstream fin("paint.in");
	ofstream fout("paint.out");
	vector<bool> cover(100);
	int a, b, c, d; fin >> a >> b >> c >> d;
	for (int i = a; i < b; ++i) cover[i] = 1;
	for (int i = c; i < d; ++i) cover[i] = 1;
	int ans = 0;
	for (int i = 0; i < 100; ++i) ans += cover[i];
	fout << ans;
}