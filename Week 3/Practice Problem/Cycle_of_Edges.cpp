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

int par[1000005];
int groupSize[1000005];

int find(int node) // O(logN)
{
    if (par[node] == -1)
        return node;
    int leader = find(par[node]);
    par[node] = leader;
    return leader;
}

void dsu_union(int node1, int node2)
{
    int leader1 = find(node1);
    int leader2 = find(node2);
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

    int n, e, q;
    cin >> n >> e;
    int cycle_edge = 0;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        int leaderA = find(a);
        int leaderB = find(b);

        if (leaderA == leaderB)
            cycle_edge++;
        else
            dsu_union(a, b);
    }
    cout << cycle_edge << endl;

    return 0;
}