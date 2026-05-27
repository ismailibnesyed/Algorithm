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

int q, n, e;
long long int adj_mat[505][250005];

void floyd_warshell()
{
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (adj_mat[i][k] != LLONG_MAX && adj_mat[k][j] != LLONG_MAX && (adj_mat[i][k] + adj_mat[k][j] < adj_mat[i][j]))
                    adj_mat[i][j] = adj_mat[i][k] + adj_mat[k][j];
            }
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> e >> q;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
                adj_mat[i][j] = 0;
            else
                adj_mat[i][j] = LLONG_MAX;
        }
    }

    while (e--)
    {
        long long int a, b, c;
        cin >> a >> b >> c;
        adj_mat[a][b] = min(adj_mat[a][b], c);
        adj_mat[b][a] = min(adj_mat[b][a], c); // undirected graph
    }
    floyd_warshell();

    while (q--)
    {
        int s, d;
        cin >> s >> d;
        if (adj_mat[s][d] == LLONG_MAX)
            cout << -1 << endl;
        else
            cout << adj_mat[s][d] << endl;
    }
    return 0;
}