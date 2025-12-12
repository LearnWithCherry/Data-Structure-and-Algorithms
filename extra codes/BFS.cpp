#include <bits/stdc++.h>
using namespace std;
vector <int> adj[100];
int n,m;

void addEdge(int u, int v){
    adj[u].push_back(v);
    adj[u].push_back(u);
}
void BFS(int src){
    vector <int> visited(n, 0);
    queue <int> q;

    q.push(src);
    visited[src] = 1;

    cout << "BFS: ";
    while(!q.empty()){
        int node = q.front();
        q.pop();
        cout << node << " ";

        for(int next : adj[node]){
            if(!visited[next]){
                visited[next] = 1; 
                q.push(next);
            }
        }
    }
    cout << endl;
}
int main() {
    cout << "Enter number of Nodes: ";cin >> n;
    cout << "Enter number of Edges: ";cin >> m;
    cout << "Enter Edges: ";

    for(int i=0; i<m; i++){
        int u,v;
        cin >> u >> v;
        addEdge(u ,v);
    }   

    BFS(0);
    return 0;
}