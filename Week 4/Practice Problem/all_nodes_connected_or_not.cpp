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
int group_size[1005];

int find(int node)
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
    if (group_size[leader1] >= group_size[leader2])
    {
        par[leader2] = leader1;
        group_size[leader1] += group_size[leader2];
    }
    else
    {
        par[leader1] = leader2;
        group_size[leader2] += group_size[leader1];
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    memset(par, -1, sizeof(par));
    memset(group_size, 1, sizeof(group_size));

    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        int leaderA = find(a);
        int leaderB = find(b);

        // if(leaderA == leaderB) // connected
        if (leaderA != leaderB)
        {
            dsu_union(a, b);
        }
    }

    bool flag = true; // easy to find disconnected from connected

    // int leader1 = find(1); // any leader of node
    int leader5 = find(5);
    for (int i = 1; i <= n; i++)
    {
        int leader_node = find(i);
        if (leader5 != leader_node)
        {
            flag = false;
            break;
        }
    }
    if (flag)
        cout << "All Node connected" << endl;
    else
        cout << "All Node are not connected" << endl;

    return 0;
}