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

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<long long, pair<int, int>> tracker;

    for (int i = 1; i <= n; i++) 
    {
        long long val;
        cin >> val;

        if (tracker.find(val) == tracker.end())
            tracker[val] = {i, i}; 
        else
            tracker[val].second = i;
    }

    for (auto x : tracker)
        cout << x.first << " " << x.second.first << " " << x.second.second << "\n";

    return 0;
}