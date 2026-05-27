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

char grid[105][105];
bool vis[105][105];
int level[105][105];
vector<pair<int, int>> dis = {{2, 1}, {2, -1}, {-2, 1}, {-2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}};

int n, m;


bool isValid(int i, int j)
{
    if (i < 1 || i > n || j < 1 || j > m)
        return false;
    return true;
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    level[si][sj] = 0;
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();

        for (auto p : dis)
        {
            int ci = par.first + p.first;
            int cj = par.second + p.second;
            if (isValid(ci, cj) && !vis[ci][cj])
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                level[ci][cj] = level[par.first][par.second] + 1;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    n = 8, m = 8;
    int t;
    cin >> t;
    while (t--)
    {
        int sj, dj, si, di;
        string s, d;
        cin >> s >> d;
        si = s[1] - '0';
        sj = s[0] - 'a' + 1;
        di = d[1] - '0';
        dj = d[0] - 'a' + 1;
        memset(vis, false, sizeof(vis));
        memset(level, -1, sizeof(level));
        bfs(si,sj);
        cout << level[di][dj] << endl;
    }

    return 0;
}