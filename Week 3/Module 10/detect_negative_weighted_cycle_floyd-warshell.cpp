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

int n, e;
int adj_mat[105][105];

void floyd_warshell()
{
    for (int k = 0; k < n; k++)
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                if (adj_mat[i][k] != INT_MAX && adj_mat[k][j] != INT_MAX && (adj_mat[i][k] + adj_mat[k][j] < adj_mat[i][j]))
                                    adj_mat[i][j] = adj_mat[i][k] + adj_mat[k][j];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> e;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (i == j)
                adj_mat[i][j] = 0;
            else
                adj_mat[i][j] = INT_MAX;
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        adj_mat[a][b] = c;
        // adj_mat[b][a] = c; // undirected graph
    }
    floyd_warshell();
    bool cycle = false;
    for (int i = 0; i < n; i++)
        if (adj_mat[i][i] < 0)
            cycle = true;
    if (cycle)
        cout << "Cycle Detected \n";
    else
        for (int i = 0; i < n; i++) // printing
        {
            for (int j = 0; j < n; j++)
                if (adj_mat[i][j] == INT_MAX)
                    cout << "i ";
                else
                    cout << adj_mat[i][j] << " ";
            cout << endl;
        }
    return 0;
}