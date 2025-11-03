//program to tarverse graphs using DFS
#include <iostream>
#include <vector>
using namespace std;

// Function for DFS traversal (recursive)
void dfs(int node, vector<vector<int>>& adj, vector<bool>& visited) {
    visited[node] = true;
    cout << node << " ";

    // Visit all adjacent vertices that are not visited yet
    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor, adj, visited);
        }
    }
}

int main() {
    int vertices, edges;
    cout << "Enter number of vertices: ";
    cin >> vertices;
    cout << "Enter number of edges: ";
    cin >> edges;

    // adjacency list representation
    vector<vector<int>> adj(vertices);

    cout << "Enter edges (u v) for an undirected graph:\n";
    for (int i = 0; i < edges; i++) {
        int u, v;
        cin >> u >> v;

        // store both ways because graph is undirected
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int start;
    cout << "Enter starting vertex for DFS: ";
    cin >> start;

    vector<bool> visited(vertices, false);

    cout << "DFS Traversal starting from vertex " << start << ": ";
    dfs(start, adj, visited);
    cout << endl;

    return 0;
}
