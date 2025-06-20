#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cout << "Enter the value of vertices : ";
    cin >> n;
    cout << "Enter the value of edges : ";
    cin >> e;
    vector<vector<int>> adj(n);
    cout << "Enter the edges : ";
    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
    }
    for (int i = 0; i < n; i++)
    {
        cout << i << " -> ";
        for (auto u : adj[i])
            cout << u << " ";
        cout << endl;
    }
}