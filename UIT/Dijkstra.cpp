#include<iostream>
#include<vector>

using namespace std;

const int INF = 1000000000;
vector<vector<pair<int, int>>> adj;

void dijkstra(int s, vector<int>& d, vector<int>& p) {
    int n = adj.size();
    d.assign(n, INF);
    p.assign(n, -1);
    vector<bool> u(n, false);

    d[s] = 1;
    for (int i = 0; i < n; i++) {
        int v = -1;
        for (int j = 0; j < n; j++) {
            if (!u[v] and (v == -1 or d[j] < d[v])) v = j;
        }

        if (d[v] == INF) break;

        u[v] = true;
        for (auto [to, len] : adj[v]) {
            if (d[to] > d[v] + len) {
                d[to] = d[v] + len;
                p[to] = v;
            }
        }
    }

}

int main() {

}