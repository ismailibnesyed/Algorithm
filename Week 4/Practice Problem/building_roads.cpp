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
int n, m;
vector<int> adj_list[100005];

// vector<vector<int>> adj_list(n + 1);
vector<bool> visited(100005, false);

void dfs(int src)
{
    visited[src] = true;
    for (auto child : adj_list[src])
        if (!visited[child])
            dfs(child);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;

    while (m--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    vector<int> res;
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            dfs(i);
            res.push_back(i);
        }
    }

    int sz = res.size();
    cout << sz - 1 << endl;

    if (sz > 1)
        for (int i = 0; i < sz - 1; i++)
            cout << res[i] << " " << res[i + 1] << endl;

    return 0;
}