#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<char> vc;
typedef vector<bool> vb;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
typedef vector<vi> vvi;
typedef vector<vb> vvb;
typedef queue<int> qi;
typedef stack<int> si;

int bfs(vvi v, int nodes, int x) {
    vi distance(nodes + 1, 0);
    qi q;
    vb visited(nodes + 1, false);
    int node;

    q.push(1);
    visited[1] = true;
    distance[1] = 1;

    while (!q.empty()) {
        node = q.front();
        q.pop();
        for (int i = 0; i < v[node].size(); i++) {
            if (visited[v[node][i]] == false) {
                q.push(v[node][i]);
                visited[v[node][i]] = true;
                distance[v[node][i]] = distance[node] + 1;
            }
        }
    }
    int count = 0;
    for (int i = 0; i < node - 1; i++) {
        if (distance[i] == x) {
            count++;
        }
    }
    return count;
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    bool run = true;
    int nodes, edge1, edge2, x;
    cin >> nodes;
    vvi v(nodes + 1);
    for (int i = 0; i < nodes - 1; i++) {
        cin >> edge1 >> edge2;
        v[edge1].push_back(edge2);
        v[edge2].push_back(edge1);
    }
    cin >> x;
    cout << bfs(v, nodes, x);
    return 0;
}