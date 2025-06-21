#include <bits/stdc++.h>
using namespace std;
void DFS(int s, vector<vector<int>> adj, vector<int> vis)
{
    vis[s] = true;
    cout << s << " ";
    for (auto u : adj[s])
    {
        if (!vis[u])
        {
            DFS(u, adj, vis);
        }
    }
}
int main()
{
    cout << "Enter the number of nodes and edges: ";
    int n, e;
    cin >> n >> e;
    vector<vector<int>> adj(n);
    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    cout << "Enter the starting node : ";
    int start;
    cin >> start;
    vector<int> vis(n, false);
    DFS(start, adj, vis);
}