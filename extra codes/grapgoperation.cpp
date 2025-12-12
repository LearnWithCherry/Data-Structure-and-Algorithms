#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> adj[100];

// Add edge
void addEdge(int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

// BFS
void bfs(int start){
    queue<int> q;
    vector<int> vis(100, 0);

    vis[start] = 1;
    q.push(start);

    while(!q.empty()){
        int node = q.front();
        q.pop();

        cout << node << " ";

        for(int x : adj[node])
            if(!vis[x]){
                vis[x] = 1;
                q.push(x);
            }
    }
}

// DFS
void dfs(int node, vector<int> &vis){
    vis[node] = 1;
    cout << node << " ";

    for(int x : adj[node])
        if(!vis[x])
            dfs(x, vis);
}
