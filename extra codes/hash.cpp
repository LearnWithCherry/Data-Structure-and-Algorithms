#include <bits/stdc++.h>
using namespace std;

vector<int> adj[100];  // adjacency list
int n, m;              // n = nodes, m = edges

void addEdge(int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u); // undirected
}

void BFS(int src){
    vector<int> vis(n, 0);
    queue<int> q;

    q.push(src);
    vis[src] = 1;

    cout << "BFS: ";
    while(!q.empty()){
        int node = q.front();
        q.pop();
        cout << node << " ";

        for(int nxt : adj[node]){
            if(!vis[nxt]){
                vis[nxt] = 1;
                q.push(nxt);
            }
        }
    }
    cout << endl;
}

void DFSutil(int node, vector<int> &vis){
    vis[node] = 1;
    cout << node << " ";

    for(int nxt : adj[node]){
        if(!vis[nxt]) DFSutil(nxt, vis);
    }
}

void DFS(int src){
    vector<int> vis(n, 0);
    cout << "DFS: ";
    DFSutil(src, vis);
    cout << endl;
}

int main(){
    cout << "Enter number of nodes and edges: ";
    cin >> n >> m;

    cout << "Enter edges:" << endl;
    for(int i=0; i<m; i++){
        int u, v;
        cin >> u >> v;
        addEdge(u, v);
    }

    BFS(0);
    DFS(0);

    return 0;
}
