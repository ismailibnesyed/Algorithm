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

void maxContainer()
{
    int n;
    cin >> n;
    int arr[n];
    pair<int, int> max;     // first = value, sec= index
    pair<int, int> sec_max; // first = value, sec= index
    max.first = INT_MIN;
    sec_max.first = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > max.first)
        {
            sec_max.first = max.first;
            sec_max.second = max.second;
            max.first = arr[i];
            max.second = i;
        }
        else if (arr[i] > sec_max.first)
        {
            sec_max.first = arr[i];
            sec_max.second = i;
        }
    }
    if (max.second < sec_max.second)
        cout << max.second << " " << sec_max.second << endl;
    else
        cout << sec_max.second << " " << max.second << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        maxContainer();
    }

    return 0;
}