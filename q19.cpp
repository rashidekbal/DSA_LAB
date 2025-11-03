//program to traverse garphs using BFS.
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

// Function to perform BFS traversal on a graph
void bfs(int start, vector<vector<int>>& adj, int vertices) {
    vector<bool> visited(vertices, false); // to keep track of visited nodes
    queue<int> q;                          // queue for BFS

    // start BFS from the given node
    visited[start] = true;
    q.push(start);

    cout << "BFS Traversal starting from vertex " << start << ": ";

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << " ";

        // explore all adjacent vertices
        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
    cout << endl;
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
        adj[u].push_back(v);
        adj[v].push_back(u); // remove this line if graph is directed
    }

    int start;
    cout << "Enter starting vertex for BFS: ";
    cin >> start;

    bfs(start, adj, vertices);

    return 0;
}
