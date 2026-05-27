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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, e; // node no, edge
    cin >> n >> e;
    int adj_mat[n][n];
    // for(int i=0; i<n;i++)
    // {
    //     for(int j=0; j<n; j++)
    //     {
    //         adj_mat[i][j] = 0 ;
    //     }
    // }
    memset(adj_mat, 0, sizeof(adj_mat)); // shortcut for default value zero memset(variable,value,size)

    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        adj_mat[a][b] = 1;
        adj_mat[b][a] = 1; // undirected graph
        adj_mat[i][i] = 1; // diagonal default value
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << adj_mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}