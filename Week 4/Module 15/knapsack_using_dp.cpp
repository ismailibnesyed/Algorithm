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

int val[1005], weight[1005];
int dp[1005][1005];

int knapsack(int i, int mx_weight) // O(N*W)
{
    if (i < 0 || mx_weight <= 0)
        return 0;
    // 2 ta option
    if (dp[i][mx_weight] != -1)
        return dp[i][mx_weight];
    if (weight[i] <= mx_weight) // 1. bag a rakbo
    {
        int op1 = knapsack(i - 1, mx_weight - weight[i]) + val[i];
        int op2 = knapsack(i - 1, mx_weight);
        dp[i][mx_weight] = max(op1, op2);
        return dp[i][mx_weight];
    }
    else // 2. bag ah rakbo nah
    {
        // int op2 = knapsack(i - 1);
        // return op2;
        dp[i][mx_weight] = knapsack(i - 1, mx_weight);
        return dp[i][mx_weight];
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, mx_weight;

    cin >> n;

    for (int i = 0; i < n; i++)
        for (int j = 0; j <= mx_weight; j++)
            dp[i][j] = -1;

    for (int i = 0; i < n; i++)
        cin >> val[i];
    for (int i = 0; i < n; i++)
        cin >> weight[i];
    cin >> mx_weight;

    cout << knapsack(n - 1, mx_weight) << endl;

    return 0;
}