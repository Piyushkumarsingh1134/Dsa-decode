#include <iostream>
#include <vector>
#include <list>
using namespace std;

vector<list<pair<int,int> > > graph;
int v;

void add(int src, int des, int wt,bool bi_dir = true) {
    graph[src].push_back({des,wt});
    if (bi_dir) {
        graph[des].push_back({src,wt});
    }
}

void display() {
    for (int i = 0; i < graph.size(); i++) {
        cout << i << "---";
        for (auto el : graph[i]) {
            cout << "("<<el.first << " "<<el.second<<" ";
        }
        cout << endl;
    }
}

int main() {
    cin >> v;
    graph.resize(v,list<pair<int,int>> ());
    int e;
    cin >> e;
    while (e--) {
        int s, d,wt;
        cin >> s >> d>> wt;
        add(s, d,wt);
    }
    display();
    return 0;
}