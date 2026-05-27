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

    int n, e;
    cin >> n >> e;
    vector<int> adj_list[n]; // array of vector
    while (e--)
    {
        int i, j;
        cin >> i >> j;
        adj_list[i].push_back(j);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int a, b;
        cin >> a >> b;
        int flag = 0;
        if (a == b && a < n)
            flag = 10;
        else if (a < n && b < n)
            for (int x : adj_list[a])
                if (x == b)
                    flag = 10;
        if (flag == 10)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
    return 0;
}