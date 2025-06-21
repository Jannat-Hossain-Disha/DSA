#include <bits/stdc++.h>
using namespace std;
void BFS(int s, vector<vector<int>> adj)
{
    int n = adj.size();
    queue<int> q;
    vector<int> vis(n, false);
    q.push(s);
    vis[s] = true;
    cout << "Traversing Starts from " << s << " : ";
    while (!q.empty())
    {
        int p = q.front();
        q.pop();
        cout << p << " ";
        for (auto u : adj[p])
        {
            if (!vis[u])
            {
                vis[u] = true;
                q.push(u);
            }
        }
    }
    cout << endl;
}
int main()
{
    int n, e;
    cout << "Enter the number of nodes : ";
    cin >> n;
    cout << "Enter the number of edge : ";
    cin >> e;
    vector<vector<int>> adj(n);
    cout << "Enter the edges : ";
    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int start;
    cin >> start;
    BFS(start, adj);
}