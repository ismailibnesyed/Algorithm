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
vector<int> adj_list[1005];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int a;
        cin >> a;
        vector<int> nei; // neighbour
        nei = adj_list[a];
        sort(nei.begin(), nei.end(), greater<int>());
        if (!size(nei))
            cout << -1;
        else
            for (int y : nei)
                cout << y << " ";
        cout << endl;
    }

    return 0;
}