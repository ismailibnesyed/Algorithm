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
int n, m, di, dj;
bool flag = false;
vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}}; // move

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}

void dfs(int si, int sj)
{
    vis[si][sj] = true;
    for (int i = 0; i < 4; i++)
    {
        int ci, cj;
        ci = si + d[i].first;
        cj = sj + d[i].second;
        if (!vis[ci][cj] && valid(ci, cj) && grid[ci][cj] == '.')
        {
            if (ci == di && cj == dj)
            {
                flag = true;
                break;
            }
            dfs(ci, cj);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> grid[i][j];
    int si, sj;
    cin >> si >> sj >> di >> dj;
    if(si==di && sj==dj)
    {
        cout << "YES" << endl;
        return 0 ;
    }
    dfs(si, sj);
    if (flag == true)
        cout << "YES";
    else
        cout << "NO";
    cout << endl;
    return 0;
}