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
pair<int, int> par[1005][1005];
int n, m;
int si, sj, di, dj;

vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool valid(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m && grid[i][j] != '#' && !vis[i][j]);
}

// check if path exists
bool canVisit()
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    par[si][sj] = {-1, -1};

    while (!q.empty())
    {
        // bahir kora
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        // kaj kora
        if (x == di && y == dj)
            return true; // reached destination

        // children push kora
        for (auto dir : d)
        {
            int nx = x + dir.first;
            int ny = y + dir.second;
            if (valid(nx, ny))
            {
                vis[nx][ny] = true;
                par[nx][ny] = {x, y};
                q.push({nx, ny});
            }
        }
    }
    return false;
}

// mark shortest path 
void Path()
{
    int x = di, y = dj;
    while (!(x == si && y == sj))
    {
        if (grid[x][y] == '.')
            grid[x][y] = 'X';
        auto p = par[x][y];
        x = p.first;
        y = p.second;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
            if (grid[i][j] == 'R')
                si = i, sj = j;
            if (grid[i][j] == 'D')
                di = i, dj = j;
        }

    memset(vis, false, sizeof(vis));

    if (canVisit()) // check 
    {
        Path(); // change
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << grid[i][j];
        cout << endl;
    }

    return 0;
}
