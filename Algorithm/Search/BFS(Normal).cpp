#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<char> vc;
typedef vector<bool> vb;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef vector<vi> vvi;
typedef queue<int> qi;
typedef stack<int> si;

void bfs() {
    vvi adj; //Adjacency List Representation
    int n; //Number of Nodes
    int s; //Source Vertex

    qi q;
    vb used(n);
    vi d(n), p(n);

    q.push(s);
    used[s] = true;
    p[s] = -1;
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        for (int u : adj[v]) {
            if (!used[u]) {
                used[u] = true;
                q.push(u);
                d[u] = d[v] + 1;
                p[u] = v;
            }
        }
    }
}


int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);


	return 0;
}