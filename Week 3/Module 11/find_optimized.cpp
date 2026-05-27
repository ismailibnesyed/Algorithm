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

int par[1005];

int find(int node) // O(logN)
{
    cout << node << endl;
    if (par[node] == -1)
        return node;
    int leader = find(par[node]);
    par[node] = leader;
    return leader;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    memset(par, -1, sizeof(par));
    par[0] = 1;
    par[1] = -1;
    par[2] = 1;
    par[3] = 1;
    par[4] = 5;
    par[5] = 3;

    find(4);
    // cout << find(4) << endl;

    return 0;
}