#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter the number of Vertices : ";
    int n,e;
    cin>>n;
    cout<<"Enter the number of Edges : ";
    cin>>e;
    vector<vector<int>> adj(n, vector<int>(n, 0));
    int edges[e][2];
    cout<<"Enter the Edges : ";
    for(int i=0;i<e;i++)
    {
        for(int j=0;j<2;j++)
        cin>>edges[i][j];
    }
    for(int i=0;i<e;i++)
    {
        int u=edges[i][0];
        int v=edges[i][1];
        adj[u][v]=1;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<adj[i][j]<<" ";
        cout<<endl;
    }

}