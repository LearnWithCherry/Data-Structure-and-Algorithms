#include <iostream>
#include <vector>
using namespace std;
int c = 0;
void DFSRec(vector<int> adj[], int source, vector<bool> &visited) {
    visited[source] = true;
    c++;
    cout << source << " ";

    for (int u : adj[source]) {
        if (!visited[u]) {
            DFSRec(adj, u, visited);
        }
    }
}

void DFS(vector<int> adj[], int vertix, int source) {
    vector<bool> visited(vertix, false);
    DFSRec(adj, source, visited);
}

void addEdge(vector<int> adj[], int u, int v) {
    adj[u].push_back(v);  
    adj[v].push_back(u);
}

int main() {
    int v = 5;
    vector<int> adj[v];

    addEdge(adj, 0, 1);
        addEdge(adj, 2, 1);
            addEdge(adj, 3, 0);
                addEdge(adj, 4, 1);
                    addEdge(adj, 4, 2);
    cout << "Total: " << c << endl;
    cout << "Following is the DFS Traversal: ";
    DFS(adj, v, 0);

    return 0;
}
