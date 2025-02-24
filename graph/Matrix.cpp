#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    // Dynamically creating the adjacency matrix
    int adj[n + 1][n + 1] = {0};

    // Reading edges and populating the adjacency matrix
    for (int i = 0; i < m; i++) { // Loop runs for m edges
        int u, v;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1; // Remove this line for directed graphs
    }

    // Printing the adjacency matrix
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
