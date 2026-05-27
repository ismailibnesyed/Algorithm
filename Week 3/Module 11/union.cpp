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
int groupSize[1005];

int find(int node) // O(logN)
{
    if (par[node] == -1)
        return node;
    int leader = find(par[node]);
    par[node] = leader;
    return leader;
}

void dsu_union(int node1, int node2) // O(logN)
{
    int leader1 = find(node1); // O(logN)
    int leader2 = find(node2); // O(logN)
    if (groupSize[leader1] > groupSize[leader2])
    {
        par[leader2] = leader1;
        groupSize[leader1] += groupSize[leader2];
    }
    else
    {
        par[leader1] = leader2;
        groupSize[leader2] += groupSize[leader1];
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    memset(par, -1, sizeof(par));
    memset(groupSize, 1, sizeof(groupSize));

    dsu_union(0, 1);
    dsu_union(0, 2);
    dsu_union(3, 4);
    dsu_union(3, 2);

    for (int i = 0; i < 5; i++)
    {
        cout << i << " -> " << par[i] << endl;
    }

    return 0;
}