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

vector<int> adj_list[1005]; // Global declaletion
bool vis[1005];             // Global declaletion

void bfs(int src)
{
    queue<int> q; // Space complexity O(N)
    q.push(src);
    vis[src] = true;

    while (!q.empty()) // O(V) number of vertex
    {
        // 1.ber kore ana
        int par = q.front(); // parent
        q.pop();

        // 2.kaj kora
        cout << par << " ";

        // 3.children push kora
        for (auto child : adj_list[par]) // O(E) edge no
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
            }
        }
    } // -----------O(V+E) ----S()
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
        adj_list[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    bfs(0);
    return 0;
}