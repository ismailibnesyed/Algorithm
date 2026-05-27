/*
|------------------------|
|                        |
|     Md                 |
|       Ismail           |
|         Hossain        |
|                        |
|------------------------|
*/
// Problems:

#include <bits/stdc++.h>
using namespace std;

bool vis[1005];
vector<int> adj_list[1005];
bool path_vis[1005];
bool cycle;

void dfs(int src)
{
    vis[src] = true;
    path_vis[src] = true;
    for (int child : adj_list[src])
    {
        if (vis[child] && path_vis[child])
            cycle = true;
        if (!vis[child])
        {
            dfs(child);
        }
    }
    // return
    path_vis[src] = false ;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        // adj_list[b].push_back(a); // directed graph
    }
    memset(vis, false, sizeof(vis));
    memset(path_vis, false, sizeof(path_vis));
    cycle = false;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
            dfs(i);
    }
    // for(int i=0; i<n ; i++)
    //     cout << i << " -> " << parent[i] << endl;
    if (cycle)
        cout << "Cycle Detected\n";
    else
        cout << "No Cycle Detected\n";
    return 0;
}