#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> adj[1001]; //values are from 1 to 10^3 therefore u need size 10^3+1
    int x, y, nodes, edges, queries, node1, node2;
    cin >> nodes >> edges;
    for(int i = 0;i < edges;i++) { //no of edges needed
        cin >> x >> y;
        adj[x].push_back(y); //Insert y in adjacency list of x
        adj[y].push_back(x); //Insert x in adjacency list of y because undirected graph
    }
    cin >> queries;
    bool ans = false;
    for (int j = 0; j < queries; j++) {
        ans = false;
        cin >> node1 >> node2;
        for (int k = 0; k < adj[node1].size(); k++) {
            if (adj[node1][k] == node2) {
                cout << "YES\n"; //new line per output
                ans = true;
                break; //if you find it no need to traverse
            }
            /*if(node2 == adj[node1].size()-1)
            cout << "NO" <<endl;*/
        }
    if (!ans)
        cout << "NO" <<endl;
    }

    return 0;
}