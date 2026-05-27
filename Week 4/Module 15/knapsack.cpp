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

int knapsack(int idx, int mx_weight) // O(2^N)
{
    if (idx < 0 || mx_weight <= 0)
        return 0;
    // 2 ta option
    if (weight[idx] <= mx_weight) // 1. bag a rakbo
    {
        int op1 = knapsack(idx - 1, mx_weight - weight[idx]) + val[idx];
        int op2 = knapsack(idx - 1, mx_weight);
        return max(op1, op2);
    }
    else // 2. bag ah rakbo nah
    {
        // int op2 = knapsack(idx - 1);
        // return op2;
        return knapsack(idx - 1, mx_weight);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, mx_weight;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> val[i];
    for (int i = 0; i < n; i++)
        cin >> weight[i];
    cin >> mx_weight;

    cout << knapsack(n - 1, mx_weight) << endl;

    return 0;
}