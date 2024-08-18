#include <iostream>
#include <vector>
#include <list>
#include <unordered_set>
using namespace std;

unordered_set<int> visited;
vector<list<int>> graph;

void add_edge(int src, int dest, vector<list<int>>& graph, bool bi_dir = true) {
    graph[src].push_back(dest);
    if (bi_dir) {
        graph[dest].push_back(src);
    }
}

bool dfs(int curr, int end) {
    if (curr == end) return true;
    visited.insert(curr);
    for (auto neighbour : graph[curr]) {
        if (visited.find(neighbour) == visited.end()) {
            if (dfs(neighbour, end)) return true;
        }
    }
    return false;
}

bool anypath(int src, int dest) {
    visited.clear();  // Clear the visited set before each new path search
    return dfs(src, dest);
}

int main() {
    int v, e;
    cin >> v >> e;
    graph.resize(v);

    while (e--) {
        int s, d;
        cin >> s >> d;
        add_edge(s, d, graph, false);
    }

    int x, y;
    cin >> x >> y;
    cout << (anypath(x, y) ? "Path exists" : "Path does not exist") << endl;

    return 0;
}
