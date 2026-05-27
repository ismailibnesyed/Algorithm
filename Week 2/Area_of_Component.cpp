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

char grid[1005][1005];
bool vis[1005][1005];
int n, m;
vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}}; // move directions

bool valid(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m);
}

int dfs(int si, int sj)
{
    vis[si][sj] = true;
    int area = 1;
    for (int k = 0; k < 4; k++)
    {
        int ci = si + d[k].first;
        int cj = sj + d[k].second;
        if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == '.')
        {
            area += dfs(ci, cj);
        }
    }
    return area;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> grid[i][j];

    memset(vis, false, sizeof(vis));

    int minArea = INT_MAX;
    bool found = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == '.' && !vis[i][j])
            {
                int area = dfs(i, j);
                minArea = min(minArea, area);
                found = true;
            }
        }
    }
    if (found)
        cout << minArea;
    else
        cout << -1;
    cout << endl;
    return 0;
}
