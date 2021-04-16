#include<bits/stdc++.h> 
#include<list> 
using namespace std; 


class Graph { 
    int V; 
    list<int> *adj; 

    void DFSUtil(int v, bool visited[]); 
    public: 
    Graph(int V);

    void addEdge(int v, int w); 

    void DFS(int v); 
}; 

Graph::Graph(int V) 
{ 
    this->V = V; 
    adj = new list<int>[V]; 
} 

void Graph::addEdge(int v, int w) 
{ 
    adj[v].push_back(w);
} 

void Graph::DFSUtil(int v, bool visited[]) { 
    visited[v] = true; 
    cout << v << " "; 

    for (list<int>::iterator i = adj[v].begin(); i != adj[v].end(); ++i) 
        if (!visited[*i]) 
            DFSUtil(*i, visited); 
} 

void Graph::DFS(int v) {
    bool *visited = new bool[V]; 
    for (int i = 0; i < V; i++) 
        visited[i] = false;
    DFSUtil(v, visited); 
} 

int test() 
{ 
    // Create a graph given in the above diagram 
    Graph g(4); 
    g.addEdge(0, 1); 
    g.addEdge(0, 2); 
    g.addEdge(1, 2); 
    g.addEdge(2, 0); 
    g.addEdge(2, 3); 
    g.addEdge(3, 3); 

    cout << "Following is Depth First Traversal"
            " (starting from vertex 2) \n"; 
    g.DFS(2); 

    return 0; 
}

int main() 
{
    int V, A[2];
    cin >> V;
    Graph g(V); 
    while (cin >> A[0] >> A[1]) {
       if (A[0]<0 || A[1]<0 || A[0]>=V || A[1]>=V)
           cout << A[0] << "->" << A[1] << " refers to a non-existent node" << "\n";
       else g.addEdge(A[0], A[1]);
    }
    g.DFS(2);
    return 0; 
}