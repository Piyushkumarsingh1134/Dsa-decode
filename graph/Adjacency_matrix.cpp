#include <iostream>
#include <vector>
#include <list>
using namespace std;

vector<list<int>> graph;
int v;

void add(int src, int des, bool bi_dir = true) {
    graph[src].push_back(des);
    if (bi_dir) {
        graph[des].push_back(src);
    }
}

void display() {
    for (int i = 0; i < graph.size(); i++) {
        cout << i << "---";
        for (auto el : graph[i]) {
            cout << el << " ";
        }
        cout << endl;
    }
}

int main() {
    cin >> v;
    graph.resize(v);
    int e;
    cin >> e;
    while (e--) {
        int s, d;
        cin >> s >> d;
        add(s, d);
    }
    display();
    return 0;
}

